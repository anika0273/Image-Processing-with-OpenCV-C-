#pragma once
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>
#include <string>
#include "pch.h"
#include "image.h"

image im;
using namespace cv;
using namespace std;

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ button3;


	private: System::Windows::Forms::Button^ button1;


	private: System::Windows::Forms::TrackBar^ trackBar2;
	private: System::Windows::Forms::TrackBar^ trackBar1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TrackBar^ trackBar3;
	private: System::ComponentModel::IContainer^ components;


	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->trackBar2 = (gcnew System::Windows::Forms::TrackBar());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->trackBar3 = (gcnew System::Windows::Forms::TrackBar());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar3))->BeginInit();
			this->SuspendLayout();
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(372, 11);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(158, 58);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Median Filter Select Window Size:";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(372, 107);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(158, 69);
			this->button1->TabIndex = 15;
			this->button1->Text = L"Show All Image";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click_1);
			// 
			// trackBar2
			// 
			this->trackBar2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->trackBar2->Location = System::Drawing::Point(411, 250);
			this->trackBar2->Maximum = 100;
			this->trackBar2->Name = L"trackBar2";
			this->trackBar2->Size = System::Drawing::Size(583, 69);
			this->trackBar2->TabIndex = 17;
			this->trackBar2->Scroll += gcnew System::EventHandler(this, &Form1::trackBar2_Scroll);
			// 
			// trackBar1
			// 
			this->trackBar1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->trackBar1->Location = System::Drawing::Point(411, 376);
			this->trackBar1->Maximum = 200;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(583, 69);
			this->trackBar1->TabIndex = 18;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &Form1::trackBar1_Scroll);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(639, 337);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(85, 20);
			this->label1->TabIndex = 19;
			this->label1->Text = L"Brightness";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(639, 465);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(70, 20);
			this->label2->TabIndex = 20;
			this->label2->Text = L"Contrast";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Georgia", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(9, 12);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(286, 133);
			this->textBox1->TabIndex = 21;
			this->textBox1->Text = L"Enter the picture number you want to see (1 to 10)";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(88, 181);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 26);
			this->textBox2->TabIndex = 22;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Form1::textBox2_TextChanged);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(88, 239);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 34);
			this->button2->TabIndex = 23;
			this->button2->Text = L"Change";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(536, 43);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(104, 26);
			this->textBox3->TabIndex = 24;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(78, 324);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(124, 74);
			this->button4->TabIndex = 25;
			this->button4->Text = L"Save All Images";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// trackBar3
			// 
			this->trackBar3->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->trackBar3->LargeChange = 1;
			this->trackBar3->Location = System::Drawing::Point(536, 107);
			this->trackBar3->Maximum = 9;
			this->trackBar3->Name = L"trackBar3";
			this->trackBar3->Size = System::Drawing::Size(458, 69);
			this->trackBar3->TabIndex = 26;
			this->trackBar3->Scroll += gcnew System::EventHandler(this, &Form1::trackBar3_Scroll);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1003, 500);
			this->Controls->Add(this->trackBar3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->trackBar1);
			this->Controls->Add(this->trackBar2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button3);
			this->Name = L"Form1";
			this->Text = L"Form1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) { //median filtering
	System::String^ input = textBox3->Text; //taking the window size from the textbox
	int j = System::Convert::ToInt16(input); //converting the string to integer
	im.filter(j); //sending the parameter to the filter function
}

private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) { //opening images
	im.openimagefile(); //change images e=with the button click	
}
private: System::Void trackBar2_Scroll(System::Object^ sender, System::EventArgs^ e) { //for controlling the brightness
	
	ifstream infile;
	string* file = new string[100];
	int i = 0;
	infile.open("text.txt");
	System::String^ input = textBox2->Text;
	int j = System::Convert::ToInt16(input); //input from the textbox that tells which picture it can control
	
	int s = im.getcount();
	int val = this->trackBar2->Value; //changed values from the trackbar
	Mat img; //original image
	Mat Bright; //modified image

	double bright = val - 20;

	while (!infile.eof()) {
		infile >> file[i];
		if (i == (j - 1)) {
			img = imread(file[i], 0);
			break;
		}
		else {
			i++;
		}
	}
	//brightness range from -20 to 100
	//input image is img, brightness is the output image,-1, 1=contrast, variable brightness

	img.convertTo(Bright, -1, 1, bright);
	namedWindow("Brightness", WINDOW_NORMAL);
	imshow("Brightness", Bright);
	waitKey(33);
	
}
private: System::Void trackBar1_Scroll(System::Object^ sender, System::EventArgs^ e) {
	
	ifstream infile;
	string* file = new string[100];
	int i = 0;
	infile.open("text.txt"); //opening the text file
	System::String^ input = textBox2->Text; //getting the input from the textbox  
	int j = System::Convert::ToInt16(input); //converting to integer
	
	int s = im.getcount();
	int val = this->trackBar1->Value; //getting the value from the trackbar
	Mat img; // for reading the originl image
	Mat contrast; //for displaying the changing contrast of the picture
	double Contrast = val / 50.0;

	while (!infile.eof()) { //for finding the picture that we chose in the textbox
		infile >> file[i];
		if (i == (j-1)) {			
			img = imread(file[i], 0);
			break; //break the loop when the picture is found
		}
		else {
			i++;
		}
	}
	// contrast range is from 0.02 to 4
	// brightness is 0 and contrast is the variable

	img.convertTo(contrast, -1, Contrast, 0);
	namedWindow("Contrast", WINDOW_NORMAL);
	imshow("Contrast", contrast);
	waitKey(33);	
}

private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) { 
	//this button function can open any image you choose from the textbox

	Mat image;
	ifstream infile;
	string* file = new string[100];
	int i = 0;
	infile.open("text.txt");
	System::String^ input = textBox2 ->Text;
	int j = System::Convert::ToInt16(input);

	while (!infile.eof()) {
		infile >> file[i];
		if (i == (j-1)) {
			image = imread(file[i], 0);
			namedWindow("Display window", WINDOW_NORMAL);
			imshow("Display window", image);
			waitKey(0);
			break;
		}
		else {
			i++;
		}
	}	
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) { //for saving the images with different names
	ifstream inFile1, inFile2;
	ofstream outFile; //for creating a new textfile where we can put any names we want for the images
	string* file = new string[100]; //for reading the metafile
	string* newimage = new string[100]; //for creating new names of the images
	int i = 0;
	int k = 0;

	//opening the original meta file with image informations
	inFile1.open("text.txt");

	if (!inFile1)
		cout << "Error Opening File\n";

	else {
		while (!inFile1.eof()) {
			inFile1 >> file[i];
			i++;
		}
		inFile1.close();
	}
	//total no of image is i
	//opening a new file to create new names for the images
	outFile.open("NewImageName.txt");
	for (int start = 0; start < i; start++)
	{
		outFile << "Image" << start + 1 << ".png" << endl; //writing new image names in the new file
	}
	outFile.close();
	inFile2.open("NewImageName.txt");
	if (!inFile2)
		cout << "Error Opening File\n";

	else {
		while (!inFile2.eof()) {
			inFile2 >> newimage[k];
			k++;
		}
		inFile2.close();
	}
	Mat* image = new Mat[i];
	for (int j = 0; j < i; j++) {
		image[j] = imread(file[j], 0); //reading the images from the input metaffile 
		imwrite(newimage[j], image[j]); //saving th eimages with new names from the file that we just created
	}
}
private: System::Void trackBar3_Scroll(System::Object^ sender, System::EventArgs^ e) {
	//changing images with a trackbar

	int val = this->trackBar3->Value; //getting value from the trackbar
	ifstream inFile;
	string* file = new string[100];
	int i = 0;
	inFile.open("text.txt");
	
		while (!inFile.eof()) {
			inFile >> file[i]; //reading the file and storing the nams in the string array
			i++;
		}
		inFile.close();

	Mat* image = new Mat[i];

	for (int j = 0; j < i; j++) {
		if (val == j) { // getting value from the trackbar and checking if that no. of image exists, if it does then open it

			image[val] = imread(file[val], 0); //read that image

			namedWindow("Display window", WINDOW_NORMAL); //create a window to show image

			imshow("Display window", image[val]); //show the image

			waitKey(0); //wait for a key stroke  
		}
	}
}
};
}