// READ : read the first number - prompt user for first number
// GET AND STORE : store the first number
// READ : read or get the second number - prompt user for second number
// GET AND STORE : store the second number
// COMPUTE : compare the first number and the second number to determine the largest
// DISPLAY / OUTPUT : display wether the first number is larger than the second number or vice versa
#include <iostream>

using namespace std;
int main()
{
	// declare 2 numbers
	int first_number, second_number;

	// prompt user for the first number
	cout << "What is the first number?\n";

	// store the input in the first_number variable
	cin >> first_number;

	// prompt user for second number
	cout << "What is the second number?\n";

	// store the input in the second_number variable
	cin >> second_number;

	// compare the two numbers you obtained
	if (first_number > second_number)
	{
		cout << first_number << " is the largest\n";
	}
	else if (first_number < second_number)
	{
		cout << second_number << " is the largest\n";
	}
	else
	{
		cout << first_number << "is equal to " << second_number << "\n";
	}
	
	return (0);
}
