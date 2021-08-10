//
// Title:     Text Turtles Operator 
// Course:     CSC 1101
// Lab Number: Lab 14 
// Author:     Mizanul Haque
// Date:       10/30/20
// Description:
//   This Application checks and determines the reading level of any text file that the user inputs. 
//  It checks how many lines, punctuation and spaces are present.
//
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

int main()
{

	// Declare variables
	int numalpha = 0;
	int numpunct= 0;
	int numspaces = 0;
	int numotherchars = 0;

	int numchar = 0;
	int totchars = 0;
	int numsent= 0;
	int numwords = 0;
	int num_letw = 0;
	

	double factor_1 = 0;
	double factor_2 = 0;
	double read_level = 0;

	char space = ' ';



	ifstream SampleText2_Input;
	string line;

	
	int linecountin = 0;
	
	// Declare constants
	const string INPUT_FILE_NAME = "SampleText2.txt";
	

	const int COLMFT1 = 20;
	const int COLMFT2 = 25;




	// Show application header
	cout << "Welcome to Text Turtles!" << endl;
	cout << "--------------------------" << endl << endl;




	// Attempt to open input file
	SampleText2_Input.open(INPUT_FILE_NAME);
	if (!SampleText2_Input.is_open())
		cout << "Error: unable to open file '" << INPUT_FILE_NAME << "'." << endl << endl;
	else
	{

		while (SampleText2_Input.good())
		{

			int i = 0;
			getline(SampleText2_Input, line);

			//Loop to read from input file
			for (i = 0; line[i] != '\0'; i++)
			{
				// Characters
				if (isalnum(line[i]))
					numalpha++;
				else if (ispunct(line[i]))
					numpunct++;
				else if (line[i] == ' ')
					numspaces++;
				else
				{
					numotherchars++;
				}

				if (line[i] == '.')
					numsent++;
			}

			linecountin++;


		}





		// Calcutlation
		totchars = numalpha + numotherchars + numpunct + numspaces;
		numwords = numspaces + numsent;
		num_letw = numalpha;

		factor_1 =  (double)numalpha / numwords * 100;
		factor_2 =  (double)numsent/numwords * 100;
		read_level = (.0588 * factor_1) - (.296 * factor_2) - 15.8;



				// Format real numbers
				cout << fixed << setprecision(1);

		
				// Read from File
				cout << "Reading files from file '" << INPUT_FILE_NAME << "' ..." << endl << endl;
				cout << linecountin << " line(s) read from file '" << INPUT_FILE_NAME << "'." << endl << endl;


		// Print to screen

		cout <s< setw(COLMFT1) << left << "Alphanumeric chars: "
			<< setw(COLMFT2) << right << numalpha << endl;
		cout << setw(COLMFT1) << left << "Punctuation chars: "
			<< setw(COLMFT2) << right << numpunct << endl;
		cout << setw(COLMFT1) << left << "Spaces: "
			<< setw(COLMFT2) << right << numspaces << endl;
		cout << setw(COLMFT1) << left << "Other characters: "
			<< setw(COLMFT2) << right << numotherchars++ << endl;
		cout << setw(COLMFT1) << left << "Total characters: "
			<< setw(COLMFT2) << right << totchars << endl << endl;

		cout << setw(COLMFT1) << left << "Sentences:"
			<< setw(COLMFT2) << right << numsent << endl;
		cout << setw(COLMFT1) << left << "Words:"
			<< setw(COLMFT2) << right << numwords << endl;
		cout << setw(COLMFT1) << left << "Letters in words: "
			<< setw(COLMFT2) << right << num_letw << endl << endl;

		cout << setw(COLMFT1) << left << "Factor 1:"
			<< setw(COLMFT2) << right << factor_1 << endl;
		cout << setw(COLMFT1) << left << "Factor 2:"
			<< setw(COLMFT2) << right << factor_2 << endl;
		cout << setw(COLMFT1) << left << "Reading level:"
			<< setw(COLMFT2) << right << read_level << endl;

		// Close input file   
		SampleText2_Input.close();
	


		
	}

	
	                   
	            









	// Show application close
	cout << "End of Text Turtles" << endl;

}