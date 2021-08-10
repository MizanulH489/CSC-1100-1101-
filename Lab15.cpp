//
// Title:     Binary Buzzard Encoding/Decoding Operator
// Course:     CSC 1101
// Lab Number: Lab 15 
// Author:     Mizanul Haque
// Date:       11/06/20
// Description:
//   This Application checks and stores files concerning reading.
// Then this application takes the two input files, one text and one consisting of binary numbers
// , which it utilizes by encoding and decoding to produce a output.
//
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

// Globals
const int character_boundary = 256;
const int COLMFT1 = 15, COLMFT2 = 40;

string encodedLine(string inLine, int shift)
{
	int length = inLine.length();
	int k;
	char p;
	string encode;
	for (int i = 0; i < length; i++)
	{
		k = int(inLine[i]);
		k = k + shift;
		k = k % character_boundary;
		p = char(k);
		encode = encode + p;

	}
	return encode;
}
string decodedLine(string inLine, int shift)
{
	string decode;
	int k, length = inLine.length();
	char d;
	for (int i = 0; i < length; i++)
	{
		k = int(inLine[i]);
		k = k - shift;
		k = k % character_boundary;
		d = char(k);
		decode = decode + d;
	}
	return decode;
}
int main()
{

	// Declare variables
	int linecountin = 0;
	int num_linecountin = 0;
	

	ifstream SampleText_inFile;
	ifstream RandomNumbers_inFile;
	string text_sample_c;
	int rand_numerical_sample;

	// Declclare constants
	const string SAMPLE_TEXT_INPUT = "SampleText2-1.txt"; 
	const string RANDOM_NUMBERS_INPUT = "RandomNumbers.txt";

	// Show application header
	cout << "Welcome to Binary Buzzards!" << endl;
	cout << "---------------------------" << endl << endl;




	// Attempt to open input file(s): text and num
	SampleText_inFile.open(SAMPLE_TEXT_INPUT);
	RandomNumbers_inFile.open(RANDOM_NUMBERS_INPUT);
	if (!SampleText_inFile.is_open())
		cout << "Error: unable to open file '" << SAMPLE_TEXT_INPUT << "'." << endl << endl;
	if (!RandomNumbers_inFile.is_open())
		cout << "Error: unable to open file '" << RANDOM_NUMBERS_INPUT << "'." << endl << endl;
	else
	{

		// Reading lines from files
		cout << "Reading lines from '" << SAMPLE_TEXT_INPUT << "' ..." << endl
			<< "Reading lines from '" << RANDOM_NUMBERS_INPUT << "' ..." << endl << endl;

		// Loop to read one line at a time from files
		while (SampleText_inFile.good() && RandomNumbers_inFile.good())
		{
			// Reading sample text and printing original output 
			getline(SampleText_inFile, text_sample_c);
			cout << setw(COLMFT1) << left << "Original:" 
				<< setw(COLMFT2) << left << text_sample_c << endl;

			linecountin = linecountin + 1;

			// Reading Random numbers
			RandomNumbers_inFile >> rand_numerical_sample;

			num_linecountin = num_linecountin + 1;

			// Printing out encoded and decoded
			cout << setw(COLMFT1) << left << "Encoded:" <<
				setw(COLMFT2) << left << encodedLine(text_sample_c, rand_numerical_sample)
				<< "(+" << rand_numerical_sample << ")" << endl;

			cout << setw(COLMFT1) << left << "Decoded:" <<
				setw(COLMFT2) << left << decodedLine(encodedLine(text_sample_c, rand_numerical_sample), rand_numerical_sample)
				<< "(-" << rand_numerical_sample << ")" << endl << endl;
		}

		// Close the input files
		SampleText_inFile.close();
		RandomNumbers_inFile.close();

		// Line count of  input files
		cout << linecountin << " line(s) read from file '" << SAMPLE_TEXT_INPUT << "'" << endl
			<< num_linecountin << " number(s) read from file '" << RANDOM_NUMBERS_INPUT << "'" << endl;
	}





	// Show application close
	cout << "End of Binary Buzzards" << endl;

}