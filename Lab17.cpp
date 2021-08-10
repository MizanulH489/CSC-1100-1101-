


//==========================================================
//
// Title:      Best Bargains
// Course:     CSC 1101
// Lab Number: Lab 17
// Author:     Mizanul Haque
// Date:       11/11/20
// Description:
//   This Application calculates the sale price of an item(s). It also
// allows user to continously purchase items.
//
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"


// Declare Global Constant
const int COLMFT1 = 45; 
const int COLMFT2 = 25;
const float state_t = .06;


// Switch function for Product name 
string productString(char c)
{
	string product_name;
	switch (c)
	{
	case 'b':
		product_name = "Bluetooth speakers";
		break;
	case 'd':
		product_name = "Dishwasher";
		break;
	case 'f':
		product_name = "File cabinet";
		break;
	case 'h':
		product_name = "Headphones";
		break;
	case 'm':
		product_name = "Microwave";
		break;
	case 'o':
		product_name = "Office chair";
		break;
	default:
		product_name = "Unknown product code";
	}
	return product_name;
}


// Switch function for Product Category
string categoryString(char c)
{
	string product_group;
	switch (c)
	{
	case 'b':
		product_group = "Audio";
		break;
	case 'd':
		product_group = "Appliances";
		break;
	case 'f':
		product_group = "Furniture";
		break;
	case 'h':
		product_group = "Audio";
		break;
	case 'm':
		product_group = "Appliances";
		break;
	case 'o':
		product_group = "Furniture";
		break;
	default:
		product_group = "Unknown product category";
	}
	return product_group;
}

int main()
{

	// Declare variables
	char purchased_sale; 
	char product_code;

	string product_name; 
	string product_group;

	float wholesale_p;
	float price_retail;
	float product_p; 
	float s_tax; 
	float totalcost;


	// Format real numbers 
	cout << setprecision(2) << fixed;
	
	// Show application header
	cout << "Welcome to Best Bargains!" << endl;
	cout << "--------------------------" << endl << endl;

	

	// set Sale ID to zero
	int SALE_ID = 0;

	// Sentinel loop, n for no sale & y for processing new sale
	cout << "Get a sale (y or n)? ";
	cin >> purchased_sale;


	while (purchased_sale != 'n')
	{
		while (purchased_sale == 'y')
		{
			// Apply Sale ID to increase
			SALE_ID++;

			     // Enter Product Code      
			cout << "\nEnter a product code:" << endl;
			cout << "b - Bluetooth speakers" << endl;
			cout << "d - Dishwasher" << endl;
			cout << "f - File cabinet" << endl;
			cout << "h - Headphones" << endl;
			cout << "m - Microwave" << endl;
			cout << "o - Office chair : ";
			cin >> product_code;


			// Transfer product code to name 
			product_name = productString(product_code);
			// Transfer product code to category
			product_group = categoryString(product_code);



			// Validation loop for wholesale price >= 0
			cout << "\nEnter the wholesale price ($0 or more): ";
			cin >> wholesale_p;
			while (wholesale_p < 0)
			{
				cout << "Error: wholesale price must be atleast $0." << endl
					<< "\nEnter the wholesale price ($0 or more): ";
				cin >> wholesale_p;
			}


			// Validation loop for retail price >= wholesale price
			cout << "\nEnter the retail price ($" << wholesale_p << " or more): ";
			cin >> price_retail;
			while (price_retail < wholesale_p)
			{
				cout << "Error: retail price must be atleast $" << wholesale_p << "." << endl
					<< "\nEnter the retail price ($" << wholesale_p << " or more): ";
				cin >> price_retail;
			}

			// Calculations
			product_p = price_retail - wholesale_p;
			s_tax = price_retail * state_t;
			totalcost = price_retail + s_tax;

			// Print to screen 
			cout << setw(COLMFT1) << left << "\nSale:"
				<< setw(COLMFT2) << right << SALE_ID << endl
				<< setw(COLMFT1) << left << "Product:"
				<< setw(COLMFT2) << right << product_name << endl
				<< setw(COLMFT1) << left << "Category:"
				<< setw(COLMFT2) << right << product_group << endl
				<< setw(COLMFT1) << left << "Wholesale price ($):"
				<< setw(COLMFT2) << right << wholesale_p << endl
				<< setw(COLMFT1) << left << "Retail price ($):"
				<< setw(COLMFT2) << right << price_retail << endl
				<< setw(COLMFT1) << left << "Profit ($):"
				<< setw(COLMFT2) << right << product_p << endl
				<< setw(COLMFT1) << left << "Sales tax (6%):"
				<< setw(COLMFT2) << right << s_tax << endl
				<< setw(COLMFT1) << left << "Total cost ($):"
				<< setw(COLMFT2) << right << totalcost << endl;

			//Prompt for another sale
			cout << " Get another sale (y or n)? ";
			cin >> purchased_sale;
		}

	}

	// Show application close
	cout << "\nEnd of Best Bargains" << endl;

	return 0;
}