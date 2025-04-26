#include <iostream>
#include <fstream>
#include <vector>
#include <limits>

using namespace std;


vector<int> generate_an_array_from_user(int size);
int print_the_elements_of_the_array(vector<int> some_array);
void write_array_into_a_file(vector<int> some_array);
void read_array_from_a_file_and_print_it(vector<int> some_array);

int main()
{
	vector<int> array = generate_an_array_from_user(5);

	print_the_elements_of_the_array(array);

	write_array_into_a_file(array);

	read_array_from_a_file_and_print_it(array);

	/*lowest_element_of_the_array();

	highest_element_of_the_array();

	sum_of_elements_of_the_array();

	sum_of_elements_of_two_arrays();

	product_of_the_elements_of_the_array();

	even_members_of_the_array();

	odd_members_of_the_array();
	
	average_of_the_members_of_the_array();*/

	return 0;
}


/**
 * This function will generate an array with a specified size determined
 * by the caller.
 */
vector<int> generate_an_array_from_user(int size)
{
	vector<int> generated_array(size);
	int counter = 0, container;

	while (counter < generated_array.size())
	{
		cout << "Please enter the element of the array at index " << counter << "." << endl;
                cin >> container;
		if (cin.fail())
		{
			cout << "Please you are supposed to enter integers to populate this array. Try again\n";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		else
		{
			generated_array[counter] = container;
			counter++;
		}
	}
	return (generated_array);
}


/**
 * This function will print the generated arrays just to show the user
 * the array his or her resposes generated.
 */
int print_the_elements_of_the_array(vector<int> some_array)
{
	int index = 0;

	cout << "\n" << "ARRAY ELEMENT" << "\t\t" << "INDEX OF ARRAY ELEMENT" << endl;
	cout << "-------------" << "\t\t" << "----------------------" << endl;
	for (index = 0; index < some_array.size(); index++)
	{
		cout << some_array[index] << "\t\t\t" << index << endl;
	}

	return 0;
}


/**
 * This function will write the elements of the generated array into a file.
 */
void write_array_into_a_file(vector<int> some_array)
{
	ofstream array_file("array.txt");

	if (array_file)
	{
		cout << "File creation was a success\n";
		for (int array_elements : some_array)
		{
			array_file << array_elements << endl;
		}
		array_file.close();
	}
	else
	{
		cout << "File creation was a failure\n";
		exit(1);
	}
}


/**
 * This function reads the contents of another file and assigns them as elements
 * to an array and display the new array elements. Note that the file it tries to
 * open to read from already exists.
 */
void read_array_from_a_file_and_print_it(vector<int> some_array)
{
	int counter = 0;

	ifstream array_file("more_arrays.txt");

	if (!array_file)
	{
		"cout << I had problems opening this file\n";
		exit(1);
	}
	cout << "File opened successfully.\n";
	do
	{
		array_file >> some_array[counter];
		counter++;
	} while(counter < some_array.size());

	 print_the_elements_of_the_array(some_array);

	array_file.close();
	cout << "File was closed successfully\n";
}
