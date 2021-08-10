


//==========================================================
//
// Title:       Avuncular Adress Operator
// Course:     CSC 1101
// Lab Number: Lab 10
// Author:     Mizanul Haque
// Date:       10/08/20
// Description:
//   This Application checks and analyzes postal adresses.
// 
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
	string address;
	
	
	int numalpha;
	int numdigit;
	int numothers;
	int length;
	// Declare Constants
	const int COLMT1 = 25;
	const int COLMT2 = 15;

	
	
	
	 int i = 0;

	



	// Show application header
	cout << "Welcome to Avuncalar Address" << endl;
	cout << "--------------------------" << endl << endl;


	

	//User Inputs
	cout << "Enter an Address:";
	getline(cin, address);

	length = address.length();
	i;
	numalpha = 0;
	numdigit = 0;
	numothers = 0;

	while (i < length)
	{
		if (isalpha(address.at(i))) {
			numalpha++;
		}
			
		else if (isdigit(address.at(i))) {
			numdigit++;
		}
			

		else {
			numothers++;

		     }
			




	i++;
	}
	

	

	// Print Digits, Alphas, and Others

	cout << setw(COLMT1) << right << "Address: " << setw(COLMT2) << left << address << endl;
	cout << setw(COLMT1) << right << "Lenth: " << setw(COLMT2) << left << length << endl;
	cout << setw(COLMT1) << right << "Digits: " << setw(COLMT2) << left << numdigit << endl;	
	cout << setw(COLMT1) << right << "Alphas: " << setw(COLMT2) << left << numalpha << endl;
    cout << setw(COLMT1) << right << "Others: " << setw(COLMT2) << left << numothers << endl;

	



	if (numdigit < 2 || numalpha < 3)
		cout << "Error: Address is Invalid." << endl;
	else if

		(numdigit > 2 || numalpha > 3)
		cout << "Address is valid!" << endl;

	else {



	}



	//Show Application Close
	cout << "\nEnd of Avuncalar Address  " << endl;
	
		

	}
	  
	  
	        