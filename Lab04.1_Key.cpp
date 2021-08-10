//==========================================================
//
// Title:    Lab 4.1
// Course:     CSC 1101
// Lab Number: Lab 4.1
// Author:     Mizanul Haque
// Date:       9/18/20
// Description: This program shows world record for track.
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
    // Declare variables
    double km = .001;
    double hr = 3600;
    double mile = 1.609344;
    double SectoMile = (4 * 60 + 12.33);
    double AvgUsainSpeed = ((100 * km) / (9.58 / hr));
    double AvgWaydeSpeed = ((400 * km) / (43.03 / hr));
    double AvgSifanSpeed = ((1 * mile) / (SectoMile / (3600))/ (9.58 / hr));
    double AvgDelilahSpeed = ((400 * km) / (52.16/ hr));

    

    

    // Calculate and show inputs and outputs 
    cout << "Runner (m-men; w-women)\t Country\t     Event\t      Time\t Average Speed" << endl;   
    cout << "Usain Bolt (m)\t         Jamaica\t100m sprint\t    9.58s\t37.578kph" << AvgUsainSpeed << endl;
    cout << "Wayde van Niekerk (m)\tSouth Africa\t400m sprint\t  43.06s\t43.03kph" << AvgWaydeSpeed << endl;
    cout << "Sifan Hassan (w)\t  Netherlands\t    Mile run\t 4m 12.33s\t22.960" << AvgSifanSpeed << endl;
    cout << "Dalilah Muhammad (w)\tUnited States\t 400m hurdles\t 52.16s\t       27.607kph" << endl;
}

