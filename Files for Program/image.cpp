#include <opencv2/core/core.hpp> 
#include <opencv2/highgui/highgui.hpp>
#include <iostream>
#include <string>
#include <fstream>
#include "pch.h"
#include "image.h"

using namespace cv; //to open the images using Mat
using namespace std;

int image:: openimagefile() //function to open the images (to read and show)
{
    ifstream inFile; //to read the metafile
    string* file = new string[100]; //for saving the image names 
    int i = 0;
    inFile.open("text.txt");

    if (!inFile)
        cout << "Error Opening File\n";

    else {
        while (!inFile.eof()) { //scanning until the end of the metafile
            inFile >> file[i]; //saving the names of the images in the "file" array which is dynamically allocated
            cout << " " << file[i] << endl;
            i++; // i is the conter wich increase by 1 every time it reads the next line
        }
        inFile.close(); //closin the metafile
    }

    Mat* image = new Mat[i]; //dynamic allocation of images. creating an array of images. the number of images is i here

    for (int j = 0; j < i; j++) {
        image[j] = imread(file[j], 0); // Read the image file
        //Check if file was opened and is ready.
        if (!image[j].data) {
            return -1;
        }
        namedWindow("Display window", WINDOW_NORMAL); //creating a window to show the image

        imshow("Display window", image[j]); //showing the image

        waitKey(0); //waiting for a key press before the image closes
    }

   this->setcount(i); //setting the private variable of the class: count to i
   return 0;
}

void image :: setcount(int x)
{
    count = x;
}
int image :: getcount()
{
    return count;
}


///////////// MEDIAN FILTER FOR ANY SIZE////////////////

int image::filter(int a) //here one dimention of the window size is taken as a parameter
{
    Mat src, dst; //one is to show the original image and another to show after filtering the image

    // Load an image
    src = imread("mrinoise.png",0); //reading the image with noise and pepper

    if (!src.data) //checking if the image exists
    {
        return -1;
    }
    int wind_size = a*a; // creating a window of size aXa
    int *window = new int [wind_size]; //creating an array of size aXa
    int k;
    dst = src.clone(); // cloning the src image to dst
    
    int dim = sqrt(wind_size); //one dimention of the window is a
    int shift = dim / 2; //every window starts from -shift and ends to +shift all around the middle point
   

    for (int y = 0; y < src.rows; y++) //for rows of the original image
        for (int x = 0; x < src.cols; x++) //for columns of the original image
            dst.at<uchar>(y, x) = 0.0; //making all pixels to 0.0

    //for picking up the window element we have to start from the shifted row and column
    //for example if the window size is 3X3 then the shift is 3/2=1. 
    //which means we are moving the window elements spreds from (-1,-1) to (1,1)
    //ex: (-1, -1), (-1, 0), (-1, 1), (0, -1), (0, 0), (0, 1), (1, -1), (1, 0), (1, 1)

    //we are creating a new boundary so the window can move without crossing over.

    for (int y = shift; y < src.rows - shift; y++) {     
        for (int x = shift; x < src.cols - shift; x++) {
             k = 0; // k goes back to 0 because as we are moving across the picture it's picking up new window elements

             while (k < wind_size) {
                 // Pick up window element
                 for (int r = -shift; r < shift + 1; r++) //rows of the window spread from -1 to 1 for example
                 {
                     for (int c = -shift; c < shift + 1; c++) //columns spread from -1 to 1
                     {
                         window[k] = src.at<uchar>(y + r, x + c); //saving the window elements
                         k++; //going to the next element until it reaches the wind_size
                     }
                 }
             }
             insertionSort(window, wind_size); //sending the array for sorting 
             if (a % 2 == 1) { //if the window size is odd number then the median is the middle number
                 dst.at<uchar>(y, x) = window[wind_size / 2]; //setting the pixel to the middle number after sorting
             }
             else if (a % 2 == 0) //if it's even then set the pixel to the average of the middle two numbers of the window array
             {
                 dst.at<uchar>(y, x) = (window[wind_size / 2]+ window[(wind_size / 2)-1])/2;
             }
        }
    }

        namedWindow("final", WINDOW_NORMAL); //for showing the filtered image
        imshow("final", dst);

        namedWindow("initial", WINDOW_NORMAL); //for showing the original image
        imshow("initial", src);

        waitKey(); //wait until a key is pressed 

        return 0;
}

//function to sort the window array

void image:: insertionSort(int window[], int size) { //taking the array and the size as an input
    int temp, i, j;
    for (i = 0; i < size; i++) {
        temp = window[i]; //saving the first element in temp
        for (j = i - 1; j >= 0 && temp < window[j]; j--) { 
            window[j + 1] = window[j];
        }
        window[j + 1] = temp;
    }
}
