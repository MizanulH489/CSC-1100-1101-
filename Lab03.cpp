//==========================================================
//
// Title:      Lab Number 3
// Course:     CSC 1101
// Lab Number: Lab Number 3
// Author:    Mizanul Haque ha5135
// Date:      9/15/20
// 
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
    //declare variable
    double h;
    double g = 9.8;
    int t;
        

    cout<<"Enter the value of time traveled by the fallen object:    ";
    cin>>t;

    h= (double)(0.5*g*t*t);
    cout<<"The distance covered by the fallen object:(meters): "<<h<<endl;

    return 0;
}

