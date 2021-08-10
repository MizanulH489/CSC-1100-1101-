


//==========================================================
//
// Title:      Problem Title: Magic Number
// Course:     CSC 1101
// Lab Number: Lab 13
// Author:     Mizanul Haque
// Date:       10/27/20
// Description:
//   This Application shows if a number is special or not.
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
	// Declare Constant
	const int COLMT1 = 25;
	const int COLMT2 = 15;



	// Declare variables
	int N;
	
	int sum = 0;

	

	// Show application header
	cout << "Welcome to Magic Numbers!" << endl;
	cout << "-----------------------------" << endl << endl;



	// Prompt User for Number

	//User Inputs and Validation for Magic Number 
	cout << left << setw(COLMT1) << "Enter the value of the Number";
	cin >> N;
	cout << endl;


	// Validation Loops
	while (N >= 20 || N <= 10000)
	{

		{
			cout << "Error. Enter the value of the number.";
			cin >> N;
			cout << endl;


		}
		sum = 0;
	}
	         //For Loop test for magic number
	
		
		for (int i = 1; i <= N; i++)
		
		{
			if ((i % 3 == 0) && (i % 5 == 0) && (i % 2 != 0) && (i % 4 != 0))
			{
				
				sum = sum + i;
			}
		}
				
			
			
		
    

	
	cout << left << setw(COLMT1) << "Error.Sum is";
	cout << right << setw(COLMT2) << sum << endl;

	if (sum > N)
		cout << left << setw(COLMT1) << "It is not the Special Number!" << endl;
	else
	{
		cout << left << setw(COLMT1) << "It is a special Number" << endl;

	}



	

	

		//Show Application Close
			cout << "\nEnd of Magic Number   " << endl;

		

	}