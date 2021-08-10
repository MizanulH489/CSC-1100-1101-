//==========================================================
//
// Title:      GPA Calculator
// Course:     CSC 1101
// Lab Number: Lab 07
// Author:     Mizanul Haque
// Date:       10/05/2020
// Description:
//   This Application displays important information
// about the number of leaves that fell in September, October, or November.
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

	// Declare Constants
	const int COLMT1 = 25;
	const int COLMT2 = 15;
	const int month = 3;

	// Declare variables
	double september_dp;
	double october_dp;
	double november_dp;
	double total_ld;
	double avg_ld;

	string highest_drop;
	string lowest_drop;


	// Formatting decimal points
	cout << fixed << setprecision(3);

	// Show application header
	cout << "Welcome to Maple Marvels" << endl;
	cout << "--------------------------" << endl << endl;

	//User Inputs
	// Leaf Droppings for the Months 
	cout << setw(COLMT1) << left << "Enter the leaf drop for September: ";
	cin >> setw(COLMT2) >> right >> september_dp;
	cout << endl;
	cout << setw(COLMT1) << left << "Enter the leaf drop for October: ";
	cin >> setw(COLMT2) >> right >> october_dp;
	cout << endl;
	cout << setw(COLMT1) << left << "Enter the leaf drop for November: ";
	cin >> setw(COLMT2) >> right >> november_dp;
	cout << endl;




   if (september_dp < 0)
		cout << "Error: all leaf counts must be at least zero." << endl;

	else if (october_dp < 0)
		cout << "Error: all leaf counts must be at least zero." << endl;

	else if (november_dp < 0)
		cout << "Error: all leaf counts must be at least zero." << endl;
	else {

	   cout << setw(COLMT1) << left << "Enter the leaf drop for September: ";
	   cin >> setw(COLMT2) >> right >> september_dp;
	   cout << endl;
	   cout << setw(COLMT1) << left << "Enter the leaf drop for October: ";
	   cin >> setw(COLMT2) >> right >> october_dp;
	   cout << endl;
	   cout << setw(COLMT1) << left << "Enter the leaf drop for November: ";
	   cin >> setw(COLMT2) >> right >> november_dp;
	   cout << endl;
		
	   // Print Calculations to Screen
		total_ld = (september_dp + october_dp + november_dp);
		avg_ld = (september_dp + october_dp + november_dp) / month;

		// Print to screen
		cout << setw(COLMT1) << left << "September leaf drop:";
		cout << setw(COLMT2) << right << september_dp << endl;
		cout << setw(COLMT1) << left << "October leaf drop :";
		cout << setw(COLMT2) << right << october_dp << endl;
		cout << setw(COLMT1) << left << "November leaf drop:";
		cout << setw(COLMT2) << right << november_dp << endl;
		cout << setw(COLMT1) << left << "Total leaf drop:";
		cout << setw(COLMT2) << right << total_ld << endl;
		cout << setw(COLMT1) << left << "Average Leaf drop per month";
		cout << setw(COLMT2) << right << avg_ld << endl;
		cout << setw(COLMT1) << left << "Highest drop";
		


		
		if (november_dp > september_dp && october_dp)
			cout << setw(COLMT2) << right << "November";

		else if (september_dp > november_dp && october_dp)
			cout << setw(COLMT2) << right << "September";
		else
		{
			cout << setw(COLMT2) << right << "October";
		}
		cout << endl;
		cout << setw(COLMT1) << left << "Lowest drop";
		
		if (october_dp > september_dp && november_dp)
			cout << setw(COLMT2) << right << "October";

		else if (october_dp > november_dp && september_dp)
			cout << setw(COLMT2) << right << "October";
		else
		{
			cout << setw(COLMT2) << right << "November";
		}

}
	//Show Application Close
	cout << "\nEnd of Maple Marvels " << endl;

}