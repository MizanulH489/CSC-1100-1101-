


//==========================================================
//
// Title:      Amazon Program Operator 
// Course:     CSC 1101
// Lab Number: Lab 20
// Author:     Mizanul Haque
// Date:       11/19/20
// Description:
//   This Amazon Application finds the product id.
// 
//
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"


const int COLMFT1 = 55;
// binary search function
int binary_seacrh(int sort_arr[], int size_array, int search_value)
{
	int low, mid, high;
	low = 0;
	high = size_array - 1;
	int j, co = 1;
	cout << setw(COLMFT1) << left << "\nThe array elements for searching: " << endl;

	while (low <= high)
	{
		// print the array
		cout << "Search number " << co << ": ";
		for (j = low; j <= high; j++)
			cout << sort_arr[j] << " ";

		cout << endl;
		mid = low + ((high - low) / 2);

		if (sort_arr[mid] > search_value)
		{
			high = mid - 1;
		}
		else if (sort_arr[mid] < search_value)
		{
			low = mid + 1;
		}
		else
			return mid; // value found in m'th position

		co++;
	}
	return -1;  // value is not found
}
// main function
int main()
{
	// Declare variables
	//int amazon_id[10];
	int id_size = 7, i;
	int searching_attribute;
	int position;


	i = 0;
	int amazon_id[] = { 5, 12, 23, 27, 31, 52, 90 };
	// getting id of each youtube video into the array
	cout << setw(COLMFT1) << left << "Print the id of each amazon products: " << endl;
	while (i < id_size)
	{
		cout << amazon_id[i] << " ";
		i++;
	}

	cout << endl;
	cout << setw(COLMFT1) << left << "\nEnter a product ID to search in the array: (-999 for exit)" << endl;
	cin >> searching_attribute;

	// call binary search; it ends for the searching_attribute== -999
	while (searching_attribute != -999)
	{
		position = binary_seacrh(amazon_id, id_size, searching_attribute);

		if (position == -1)
		{
			cout << searching_attribute << " is not found in this sorted list" << endl;
		}
		else
			cout << searching_attribute << " is found in position: " << position << " of this sorted list" << endl;

		// user can search the value iteratively
		cout << setw(COLMFT1) << left << "\nEnter a product ID to search in the array: (-999 for exit)" << endl;
		cin >> searching_attribute;
	}


	return 0;

}

