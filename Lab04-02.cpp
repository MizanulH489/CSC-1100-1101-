//==========================================================
//
// Title:      Lab 4.2
// Course:     CSC 1101
// Lab Number: Lab 4.2
// Author:     Mizanul Haque
// Date:       9/18/20
// Description:
//  This program application that shows the cost to deliver a package 
// from one city to another
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
  
  // Declare constants
   const double CostPerPound = 2.50;
   const double CostPerMile = .02;
   const int COLFMT1=20;
   const int COLFMT2=25;      

  // Declare variables
   string cityStart="Houston";
  string cityEnd= "Dallas";
	double PackageWeight= 9;
	int distance= 239.1;
	double cost;
  
	// Format real numbers
    cout << fixed << setprecision(2);

  // Show application header
  // cout << "Welcome to the Packed Penguins Webste"<< Statements << endl;
	cout << "==================================================================" << endl << endl;
	

  // Calculate cost
   cost = ( (PackageWeight * CostPerPound) + (distance * CostPerMile) );

  // Show outputs
	cout << setw(COLFMT1) << left << "From City:";
	cout << setw(COLFMT2) << right << cityStart << endl;
	cout << setw(COLFMT1) << left << "To City:";
	cout << setw(COLFMT2) << right << cityEnd << endl;
	cout << setw(COLFMT1) << left << "Weight (pounds):";
	cout << setw(COLFMT2) << right << PackageWeight << endl;
	cout << setw(COLFMT1) << left << "Distance (miles):";
	cout << setw(COLFMT2) << right << distance << endl;
	cout << setw(COLFMT1) << left << "Delivery Cost ($):";
	cout << setw(COLFMT2) << right << cost << endl;


  // Show application close
  // cout << "End of my Application" <<endl;

}
