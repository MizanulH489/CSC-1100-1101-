//==========================================================
//
// Title:      Currency Converter
// Course:     CSC 1101
// Lab Number: Lab 56.1
// Author:     Mizanul Haque
// Date:       9/25/20
// Description:
//   Console Application that shows total price for three items.
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
    double USDollar;
    double totalEuro;
    double currency_equation;
    
    // Declare constants
    const int COLFMT1 = 35;
    const int COLFMT2 = 20;
    const double USD = 1;
    const double euro = 0.86;


    // Format real numbers
    cout << fixed << setprecision(2);

     
     // Show application header
  cout << "Welcome to the Cash Converter" << endl;
  cout << "--------------------------" << endl << endl;
    
     // cout << "Enter a number: ";
  cout << "\nEnter a number of your choice in US Dollar(s)";

      //User Input
      cin >> USDollar;

  // Calculate Conversions
      currency_equation = (euro / USD);
      totalEuro = (USDollar * currency_equation);

  // Table Formatting;
  cout << setw(COLFMT1) << left << "US Dollars";
  cout << setw(COLFMT2) << right << USDollar << endl;
  cout << setw(COLFMT2) << left << "Conversion Rate (per US Dollar:";
  cout << setw(COLFMT1) << right << currency_equation ;
  cout << setw(COLFMT2) << left << "European Euro";
  cout << setw(COLFMT2) << right << "total Euro:" << totalEuro << endl;
  

  
  // Show application close
  cout << "\nEnd of my Application" << endl;

}
