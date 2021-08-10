//==========================================================
//
// Title:    Lab 1
// Course:     CSC 1101
// Lab Number: Lab 1
// Author:     Mizanul Haque
// Date:       9/9/20
// Description:
//  Student ID: ha5135, 004804504
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
    int distance1=40;  
    int distance2=30; 
    int distance3=15; 
    
    string name;  
    int total_distance= distance1+distance2+distance3; 
    double average;   average= total_distance/3;

    cout<<"Mizanul Haque:"; 
    cin>>name; 
    cout << "Total distance travelled (in miles)" << total_distance << endl;
    cout << "Average distance travelled (in miles)" << average << endl;

    return 0;
}
