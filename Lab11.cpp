


//==========================================================
//
// Title:       Facebook Status Editor
// Course:     CSC 1101
// Lab Number: Lab 11
// Author:     Mizanul Haque
// Date:       10/13/20
// Description:
//   This Application edits facebook post status.
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
	string status;
	
	int length	;
	
	
	// Declare Constants
	const int COLMT1 = 25;
	const int COLMT2 = 15;
	
	int i = 0;
	
	
	 

	



	// Show application header
	cout << "Welcome to Facebook Status Operator" << endl;
	cout << "--------------------------" << endl << endl;


	

	//User Inputs
	cout << "Enter an Status:" << endl;
	getline(cin, status);

	length = status.length();
	i=0;
	

		

	
	

	while (i < 10 || i > 50)
        {
		cout << "Your status is out of range. Enter again." << endl;
		cout << endl;
		getline(cin, status);

		if (i > 10 || i < 50) {
			cout << "Length of Status:  " << "                      ";
			cout << status << "is: " << length << endl;
		
			//Reverse Loop
			// Function to reverse a string 

			
			{
				for (int i = status.length() - 1; i >= 0; i--)
					cout << status[i];
			}


			{


			}





		}
	}
	

	

	


	



	//Show Application Close
	cout << "\nEnd of Facebook Status Operator  " << endl;
	
		

	}
	  
	  
	        