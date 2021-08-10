//
// Title:     Problem Title: Student Senate Operator 
// Course:     CSC 1101
// Lab Number: Lab 16
// Author:     Mizanul Haque
// Date:       11/10/20
// Description:
//   This Application automatically selects a President elect based upon the numbers of votes entered. 
// It choosses it depending on the highest one.
//
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

// Declare variables
string president_elect;

int vote_a;
int vote_b;
int vote_c;




void stud_sen(int vote_a, int vote_b, int vote_c)
{
	if (vote_a > vote_b && vote_a > vote_c)

	{
		president_elect = vote_a;
		cout << "Mr A is elected as president of the Student Senate";

	}
	else if (vote_b > vote_a && vote_b > vote_c)

	{
		president_elect = vote_a;
		cout << "Mr A is elected as president of the Student Senate";

	}

	else if (vote_c > vote_a && vote_c > vote_b)
	{
		president_elect = vote_c;
		cout << "Mr A is elected as president of the Student Senate";

	}
	else 
	{
		cout << "Top Two/Three Nominees got the same vote. Set a Re-election";
		void stud_sen();

	}


}

int main()
{
	int vote_a, vote_b, vote_c;

	// Show application header
	cout << "Start of Student Senate in Computer Science Department" << endl << endl;

	// Prompt User to Enter Vote Numbers

	cout << "Enter the number of votes for Mister A:";
	cin >> vote_a;
	cout << endl << endl;

	cout << "Enter the number of votes for Mister B:";
	cin >> vote_b;
	cout << endl << endl;

	cout << "Enter the number of votes for Mister C:";
	cin >> vote_c;
	cout << endl << endl;





	           // Call the function
	stud_sen(vote_a, vote_b, vote_c);
	cout << endl; 

	// Show application close;
	cout << " End of Student Senate in Computer Science Department" << endl;

}