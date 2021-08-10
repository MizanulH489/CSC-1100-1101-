


//==========================================================
//
// Title:      Friendly Fools
// Course:     CSC 1101
// Lab Number: Lab 19
// Author:     Mizanul Haque
// Date:       11/19/20
// Description:
//   This Application manages a list of friends using strings and int, and has the user input options to 
// get what they wanted.
//
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"


// Declare Global Constant
const int COLMFT1 = 20; 
const int COLMFT2 = 25;




// void function for Friends Names
void listFriends(string array[], int arraysize)
{
	//Output for friend list
	cout << "Friend list" << endl;

	for (int i = 0; i < arraysize; i++)
	{
		cout << array[i] << endl;
	}

	cout << endl;
	cout << "Friend count: ";
	cout << arraysize << endl << endl;

}

// Function search for friend's name
int searchFriends(string array[], int arraysize, string key)

{
	for (int i = 0; i < arraysize; i++)
	{
		if (array[i] == key)
		{
			return i;
		}
	}
	return -1;

}



int main()
{

	// Declare Constants
	string friendList[9] = { "Robert", "Phil", "Marlene", "Julie", "Doug" };


    // Declare Variable 
	int friendsCount, index;

	string key;

	int Arraysize = 5;

	int options = 0;
	// Format real numbers 
	cout << setprecision(2) << fixed;
	
	

	// Show application header
	cout << "Welcome to Friendly Fools!" << endl;
	cout << "--------------------------" << endl << endl;

	

	
	
	// Sentinel Loop
	   // Prompt User for input
	while (options != 9)
	{
		
		cout << setw(COLMFT1) << left << "1- List Friends" << endl;
		cout << setw(COLMFT1) << left << "2- Search Friends " << endl;
		cout << setw(COLMFT1) << left << "9- Exit" << endl;
		cout << setw(COLMFT1) << left << "Enter an Option: ";
		cin >> options;
		cout << endl;

		// sentinel loop
		if (options == 1)
			listFriends(friendList, Arraysize);
		//if choice==2, searching case
		else if (options == 2)
		{
			//taking input from the user
			cout << "\nEnter a friend to search for: ";
			cin >> (key);
			//returned value is either index or -1
			index = searchFriends(friendList, Arraysize, key);
			if (index == -1)
				//not found case
				cout << "\n'" << key << "' NOT found." << endl;
			else
				//found case
				cout << "\n'" << key << "' found at index " << index;
		}


			




		


	}

			

			

			

	

	// Show application close
	cout << "\nEnd of Friendly Fools" << endl;

	
}