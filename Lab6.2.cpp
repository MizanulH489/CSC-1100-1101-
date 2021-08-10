//==========================================================
//
// Title:      Frigid Feet Temperature Calculator
// Course:     CSC 1101
// Lab Number: Lab 5
// Author:     Mizanul Haque
// Date:       9/25/20
// Description:
//   Console Application that shows calculates and displays the 
// Celsius and Fahrenheit temperatures at a given altitude.  
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
    const int COLFMT1 = 35;
    const int COLFMT2 = 20;
    const char DEGREE_SYMBOL = (char)167;



  // Declare variables
    double ground_temperature;
    double altitude;
    double fahrenheit;
    double Air_temperature;
    
    
    // Format real numbers
    cout << fixed << setprecision(2);

     
    
      

     // Show application header
  cout << "Welcome to my Frigid Feet!" << endl;
  cout << "--------------------------" << endl << endl;

  // User Inputs 
  cout << "Enter ground temperature (" << DEGREE_SYMBOL << "C): ";
  cin >> ground_temperature;
 
  cout << "Altitudes in kilometers(km):";
  cin >> altitude;


  // Calculate
  Air_temperature = ground_temperature - (altitude * 6.5);
      fahrenheit = ((Air_temperature* 9) / 5)+ 32;

  // Show Outputs
  cout << setw(COLFMT1) << left << "Ground temperature:";
  cout << setw(COLFMT2) << right << ground_temperature << " ";
  cout << left << DEGREE_SYMBOL << "C" <<endl;
  
  cout << setw(COLFMT2) << left << "Altitude:";
  cout << setw(COLFMT1) << right << altitude << " ";
  cout << left << altitude << "km" << endl;
 
  cout << setw(COLFMT2) << left << "Air temperature";
  cout << setw(COLFMT1) << right << Air_temperature << " ";
  cout << left << DEGREE_SYMBOL << "C" << endl;

  cout << setw(COLFMT2) << left << "Air temperature";
  cout << setw(COLFMT1) << right << fahrenheit << " ";
  cout << left << DEGREE_SYMBOL << "F" << endl;




  
  // Show application close
  cout << "\nEnd of my Application" << endl;

}
