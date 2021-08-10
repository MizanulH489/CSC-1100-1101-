


//==========================================================
//
// Title:      Title: Product of Matrices
// Course:     CSC 1101
// Lab Number: Lab 21
// Author:     Mizanul Haque
// Date:       12/01/20
// Description:
//   This Application manages matrixes and shows the user the summary and multiplications of it.
// .
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
	int i, j, sum;

	int mat1[2][3], mat2[3][2];
	int matmult[2][2];

	cout << "Enter the first matrix (size: 2X3): " << endl;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			cin >> mat1[i][j];
		}
	}

	cout << "\nEnter the second matrix (size: 3X2): " << endl;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			cin >> mat2[i][j];
		}
	}

	cout << "\nProduct of two matrices is :" << endl;

	int k;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			matmult[i][j] = 0;
			for (k = 0; k < 3; k++)
			{
				matmult[i][j] = matmult[i][j] + (mat1[i][k] * mat2[k][j]);
			}
		}
	}

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			cout << matmult[i][j] << " ";
		}
		cout << endl;
	}

	return 0;

}
