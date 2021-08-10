//==========================================================
//
// Title:      GPA Calculator
// Course:     CSC 1101
// Lab Number: Lab 07
// Author:     Mizanul Haque
// Date:       10/05/20
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
	const int discount_m= 50;
	const double d_rate = .1;

	 const double c = 8.00;
	 const double p = 15.00;
	 const double r = 10.74;
	 const double s = 11.25;
	 const  double w = 12.50;

	 const string clip_board = "Clipboards";
	 const string printer_paper = "Printer paper";
	 const string Scissors = "Scissors";
	 const string Stapler = "Stapler";
	 const string writing_pads = "Writing Pads";


	// Declare variables
	 string product_name;
	 char product_code;
	 double product_cost;
	 int quantity;
	
	double subtotal;
	double discount;
	double total_price;

	

	// Formatting decimal points
	cout << fixed << setprecision(2);

	// Show application header
	cout << "Welcome to Office Oaks" << endl;
	cout << "--------------------------" << endl << endl;

	//User Inputs
	// Entering Quantity 
	cout << "Enter Quantity purchased in range 2 and 20 :";
	cin >> quantity;
  


	if (quantity < 2 || quantity > 20)
		cout << "Error: quantity purchased must be in range 2 and 20." << endl;
	else
	{

		// Enter Product Code
		// Product Code
		cout << "Enter the product codes" << endl;
		cout << "\n c-Clipboards";
		cout << "\n p-Printer paper";
		cout << "\n r- Scissors";
		cout << "\n s- Stapler";
		cout << "\n w- Writing Pad";
		cout << " : ";
		
		cin >> product_code;

		

		switch (product_code) {
		case 'c':
			product_name = "Clipboards";
				product_cost = c;
			break;
		case 'p':
			product_name = "Printer paper";
			product_cost = p;
			break;
		case 'r':
			product_name = "Scissors";
			product_cost = r;
			break;
		case 's':
			product_name = "Stapler";
			product_cost = s;
			break;
		default:
			product_name = "Writing Pads";
			product_cost = w;
			break;
		}
		

		cout << endl;
		

		// Print Product Cost and Quantity 
	   cout << setw(COLMT1) << left << ": Product cost ($)";
	   cout << setw(COLMT2) << right << product_cost;
	   cout << endl;
	   cout << setw(COLMT1) << left << "Quantity: ";
	   cout << setw(COLMT2) << right << quantity;
	   cout << endl;
	
		
	   // Print Calculations to Screen
	   subtotal = (quantity * product_cost);

	   if (subtotal > discount_m)
		   discount = subtotal * d_rate;
	   else (discount = 0);

	   

	   
	   total_price = subtotal - discount;




	   // Print to screen
	   cout << setw(COLMT1) << left << "Subtotal ($): ";
	   cout << setw(COLMT2) << right << subtotal << endl;
	   cout << setw(COLMT1) << left << "Discount ($):";
	   cout << setw(COLMT2) << right << discount << endl;
	   cout << setw(COLMT1) << left << "Total ($):";
	   cout << setw(COLMT2) << right << total_price << endl;
	   
		
		

}
	//Show Application Close
	cout << "\nEnd of Office Oaks  " << endl;

}