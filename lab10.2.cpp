


//==========================================================
//
// Title:      Yogurt Yummies Calculator  Calculator
// Course:     CSC 1101
// Lab Number: Lab 10.2
// Author:     Mizanul Haque
// Date:       10/06/20
// Description:
//   This Application calculates the price and discount rate of a yogurt
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

	// Declare Constants
	const int COLMT1 = 25;
	const int COLMT2 = 15;
	
	const double yogurt_cost = 3.50;
	const double sales_tax = 0.06;
	




	// Declare variables
	int yogurts_purch;
	double price_discount;
	double yog_subtotal;
	double ygsub_discount;	
	double ygsub_dis_total;
	double tax;
	double yogurt_t;



	// Formatting Decimal Places
	cout << fixed << setprecision(2);
	   





	// Show application header
	cout << "Welcome to Yogurt Yummies!" << endl;
	cout << "-----------------------------" << endl << endl;






	//User Inputs and Validation for Yogurt Quantity 
	cout << "Enter the number of yogurts purchased  (1-9): ";
	cin >> yogurts_purch;

	while (yogurts_purch < 1 || yogurts_purch > 9)
	{
		cout << "Error: " << yogurts_purch << " is an invalid number of yogurts." << endl;
		cout << "\nEnter the number of yogurts purchased (1-9): ";
		cin >> yogurts_purch;
		cout << endl;
	}

	


	 //User Inputs and Validation for Discount percentage
	cout << "Enter the percentage discount (0-20): ";
	cin >> price_discount;

	while (price_discount < 0 || price_discount > 20);
	{
		  cout << "Error: " << price_discount << "% is an invalid discount percentage." << endl;
		cout << "\nEnter the percentage discount (0-20): ";
		cin >> price_discount;
		cout << endl;




	}





	// Calculations
	yog_subtotal = (yogurt_cost * yogurts_purch);
	ygsub_discount = (price_discount / 100);
	ygsub_dis_total = (yog_subtotal - (yog_subtotal * ygsub_discount));
	tax = (ygsub_dis_total * sales_tax);
	yogurt_t = (yog_subtotal + tax);




	// Print to Screen
	// Formatted output
	cout << setw(COLMT1) << left << "Yogurts:"
		<< setw(COLMT2) << right << yogurts_purch << endl;

	cout << setw(COLMT1) << left << "Yogurt cost ($): "
		<< setw(COLMT2) << right << yogurt_cost << endl;

	cout << setw(COLMT1) << left << "Discount (%): "
		<< setw(COLMT2) << right << price_discount << endl;

	cout << setw(COLMT1) << left << "Subtotal ($)"
		<< setw(COLMT2) << right << yog_subtotal << endl;
	cout << setw(COLMT1) << left << "Total after discount ($)"
		<< setw(COLMT2) << right << ygsub_dis_total << endl;
	cout << setw(COLMT1) << left << "Tax ($)"
		<< setw(COLMT2) << right << tax << endl;
	cout << setw(COLMT1) << left << "Total ($)"
		<< setw(COLMT2) << right << yogurt_t << endl;









	

		//Show Application Close
			cout << "\nEnd of Yogurt Yummies   " << endl;

		

	}