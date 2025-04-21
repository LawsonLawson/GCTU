#include <iostream>

using namespace std;
int main()
{
	int first_number, second_number;

	cout << "Please enter the first and second number separated by a space\n";

	cin >> first_number >> second_number;

	// compare the two numbers you obtained
	first_number > second_number ? cout << first_number << " is the largest\n" : first_number < second_number ? cout << second_number << " is the largest\n" : cout << first_number << "is equal to " << second_number << "\n";

	return (0);
}
