//header file of image class
#pragma once
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include<iostream>
#include<string>
#include <fstream>

using namespace cv;
using namespace std;

class image
{
public:
	int openimagefile(); //function to open the images
	void setcount(int x); //counting the number of images from the metafile
	int getcount(); //getting the count of images
	int filter(int a); //function for median filter
	void insertionSort(int window[], int size); //sorting the array for median filter
	string* file = new string[100]; //for reading the names of the image files
private:
	int count;	//total number of images
};

