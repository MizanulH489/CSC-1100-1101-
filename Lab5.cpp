//==========================================================
//
// Title:      Lab 5
// Course:     CSC 1101
// Lab Number: Lab 5
// Author:     Mizanul Haque
// Date:       9/22/20
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
	double weight1 = 6;
    double weight2 = 7;
    double weight3 = 8;
    double total_price;
    
    // Declare constants
    const int COLFMT1 = 35;
    const int COLFMT2 = 15;

    // Format real numbers
    cout << fixed << setprecision(2);

     
     // Show application header
  cout << "Welcome to my Application!" << endl;
  cout << "--------------------------" << endl << endl;


  // Calculate cost
  total_price = ((6 *weight1) + (7 * weight2)+ (8 * weight3));
    
  // Show Outputs
  cout << setw(COLFMT1) << left << "price of barbara grapes(per lb):";
  cout << setw(COLFMT2) << right << "6$";
  cout << setw(COLFMT2) << right << "Weight:" << (weight1)<< endl;
  cout << setw(COLFMT1) << left << "price of Colmbard grapes(per lb)";
  cout << setw(COLFMT2) << right << "7$";
  cout << setw(COLFMT2) << right << "Weight:" << (weight2) << endl;
  cout << setw(COLFMT1) << left << "price of Cortese grapes  (per lb):";
  cout << setw(COLFMT2) << right << "8$";
  cout << setw(COLFMT2) << right << "Weight:" << (weight3) << endl;
  cout << setw(COLFMT1) << left << "Total Price is: ";
  cout << setw(COLFMT2) << right << total_price << endl;




  
  // Show application close
  cout << "\nEnd of my Application" << endl;

}
