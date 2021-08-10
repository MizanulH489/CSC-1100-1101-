


//==========================================================
//
// Title:      Snow Shephards
// Course:     CSC 1101
// Lab Number: Lab 22
// Author:     Mizanul Haque
// Date:       12/05/20
// Description:
//   This Application searches the product invetory. It prompts
// users to input the id codes of the items
//
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"


 // Declare Global Constants
const int ARRAY_SIZE = 5;
const int COLMFT1 = 20, COLMFT2 = 7;

// Declare product structs array
struct product
{
	int prod_id;
	string prod_name;
	double wholesale_pr;
	double retail_pr;
	int prod_quantity;

};


// Menu Option 
int menuOption()
{

	// Declare variables
	int option;

	// Display menu and prompt user to enter
	cout << endl;
	cout << "Snow Shepherds Menu" << endl;
	cout << "1 - Find product by ID" << endl;
	cout << "2 - Find product by Name" << endl;
	cout << "3 - List Products" << endl;
	cout << "9 - Exit" << endl << endl;
	cout << "Enter an option: ";
	cin >> option;
	cout << endl;

	// Return User's input
	return option;
}

// Find product by using the ID function
int findProductByID(product products[ARRAY_SIZE], int key)
{
	// Declare variables
	int index = 0;

	// Linear search product ID's & Return -1 if found
	while (index < ARRAY_SIZE && products[index].prod_id != key)
	{
		index = index + 1;
	}

	if (products[index].prod_id == key)
		return index;

	else
		return -1;

}


     // Find Product by using the name
int findProductByName(product products[ARRAY_SIZE], string key)
{
	// Declare variables
	int index = 0;

	// Linear search product ID's , Return -1 if found
	while (index < ARRAY_SIZE && products[index].prod_name != key)
	{
		index = index + 1;
	}

	if (products[index].prod_name == key)
		return index;
	else
		return -1;

}

// Print the product function to screen
void printProduct(product products[ARRAY_SIZE], int index)
{          
	
	cout << "Product " << products[index].prod_id << endl
		<< setw(COLMFT1) << left << "Product:"
		<< setw(COLMFT2) << right << products[index].prod_name << endl
		<< setw(COLMFT1) << left << "Wholesale ($):"
		<< setw(COLMFT2) << right << products[index].wholesale_pr << endl
		<< setw(COLMFT1) << left << "Retail ($):"
		<< setw(COLMFT2) << right << products[index].retail_pr << endl
		<< setw(COLMFT1) << left << "Inventory:"
		<< setw(COLMFT2) << right << products[index].prod_quantity << endl
		<< endl;
}

int main()
{
	// Declare Constant
	const string INPUT_FILE_NAME = "SnowShepherdsInventory.txt";

	// Declare variables
	ifstream SnowShepherdsInventorys_FileInput;

	string line;
	string prod_name;

	int option;
	int index;
	int prod_id;
	int line_count = 0;

	// Declare array from struct function
	product products[ARRAY_SIZE];

	// Show application header
	cout << "Welcome to Snow Shepherds!" << endl;
	cout << "--------------------------" << endl;

	// Attempt to open input file
	SnowShepherdsInventorys_FileInput.open(INPUT_FILE_NAME);
	if (!SnowShepherdsInventorys_FileInput.is_open())
		cout << "Error: unable to open file '" << INPUT_FILE_NAME << "'." << endl << endl;
	else
	{

		// Reading past the  header comment
		getline(SnowShepherdsInventorys_FileInput, line);

		while (SnowShepherdsInventorys_FileInput.good())
		{
			// Reading the tokens from input file
			SnowShepherdsInventorys_FileInput >> products[line_count].prod_id;
			SnowShepherdsInventorys_FileInput >> products[line_count].prod_name;
			SnowShepherdsInventorys_FileInput >> products[line_count].wholesale_pr;
			SnowShepherdsInventorys_FileInput >> products[line_count].retail_pr;
			SnowShepherdsInventorys_FileInput >> products[line_count].prod_quantity;

			// Line count 
			line_count = line_count + 1;
		}

		// Close input file and output line read
		SnowShepherdsInventorys_FileInput.close();
		cout << endl << line_count << " line(s) read from file '"
			<< INPUT_FILE_NAME << "'." << endl;

		option = menuOption();
		while (option != 9)
		{
			if (option == 1)
			{
				cout << "Enter product ID to search for: ";
				cin >> prod_id;
				index = findProductByID(products, prod_id);
				if (index == -1)
					cout << "Error: Product ID '" << prod_id << "' is not in inventory" << endl;
				else
					printProduct(products, index);
				
			}
			else if (option == 2)
			{
				cout << "\nEnter product name to search for: ";
				cin >> prod_name;
				index = findProductByName(products, prod_name);
				if (index == -1)
					cout << "Error: Product name '" << prod_name << "' is not in inventory" << endl;
				else
					printProduct(products, index);
				 

			}
			else if (option == 3)
			{
				cout << "Product Inventory " << endl;
				cout << setw(COLMFT1) << left << "Code"
					<< setw(COLMFT1) << left << "Product"
					<< setw(COLMFT1) << left << "Wholesale ($)"
					<< setw(COLMFT1) << left << "Retail ($)"
					<< setw(COLMFT1) << left << "Inventory" << endl;



				for (int i = 0; i < ARRAY_SIZE; i++)
				{

					cout << setw(COLMFT1) << left << products[i].prod_id
						<< setw(COLMFT1) << left << products[i].prod_name
						<< setw(COLMFT1) << left << products[i].wholesale_pr
						<< setw(COLMFT1) << left << products[i].retail_pr
						<< setw(COLMFT1) << left << products[i].prod_quantity
						<< endl;
				}
			}
			else
			{
				cout << "Error: Invalid menu option, of '" << option << "' try again!" << endl;
			}



			// Menu Option
			option = menuOption();
		}
	}






	// Show application close
	cout << "End of Snow Shepherds" << endl;

}
