#include "header.h"

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
 * This function will be responsible for printing the list of an array with a defined prompt.
 */
void print_array(string prompt, vector<int> some_array)
{
	cout << prompt << endl;
	for (int element : some_array)
	{
		cout << element << endl;
	}
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


/**
 * This function determines the lowerst value of a given array.
 */
void lowest_element_of_the_array(vector<int> some_array)
{
        int counter = 0;

        int lowest_element = some_array[0];

        for (counter = 1; counter < some_array.size(); counter++)
        {
                if (some_array[counter] < lowest_element)
                {
                        lowest_element = some_array[counter];
                }
        }
        cout << "The lowerst element of the array is " <<lowest_element << endl;
}


/**
 * This function determines the highest value of a given array.
 */
void highest_element_of_the_array(vector<int> some_array)
{
        int counter = 0;

        int highest_element = some_array[0];

        for (counter = 1; counter < some_array.size(); counter++)
        {
                if (some_array[counter] > highest_element)
                {
                        highest_element = some_array[counter];
                }
        }
        cout << "The highest element of the array is " <<highest_element << endl;
}

/**
 * This function computes the sum of all the elements in the given array.
 */
void sum_of_elements_of_the_array(vector<int> some_array)
{
        int sum = 0;

        for (int element : some_array)
        {
                sum += element;
        }

        cout << "The sum of all the elements of the array is "  << sum << endl;
}

/**
 * This function computest the product of all the elements in a given array.
 */
void product_of_the_elements_of_the_array(vector<int> some_array)
{
        int product = 1, counter= 0;

        for (int element : some_array)
	{
		product *= element;
	}

        cout << "The product of all the elements of the array is "  << product << endl;
}

/**
 * This function computes the sum of elements of two given arrays.
 */
void sum_of_elements_of_two_arrays(vector<int> first_array, vector<int> second_array)
{
	int first_total = 0, second_total = 0, sum;

	for (int element : first_array)
	{
		first_total += element;
	}
	for (int element : second_array)
	{
		second_total += element;
	}
	sum = first_total + second_total;

	cout << "The sum of elements of the two given arrays is " << sum << "." << endl;
}

/**
 * This function takes two arrays and computes the product of their elements.
 */
void product_of_the_elements_of_two_arrays(vector<int>first_array, vector<int>second_array)
{
	 int product = 1;

        for (int element : first_array)
        {
		product *= element;
	}
        for (int element : second_array)
        {
                product *= element;
        }

        cout << "The product of elements of the two given arrays is " << product << "." << endl;
}

/**
 * This function will traverse through an array and print out the even numbers of the array
 *
void even_members_of_the_array(vector<int> some_array)
{
	int counter = 0, flag = 0;
	
	for (counter = 0; counter <= some_array.size(); counter++)
	{
		if (some_array[counter] % 2 == 0)
		{
			flag++;
		}
	}
	vector<int> even_array(flag);
	
	for (counter = 0; counter < even_array.size(); counter++)
	{
		if (some_array[counter] % 2 == 0)
		{
			even_array[counter] = some_array[counter];
		}
	}
	print_array("The even elements in this array are:", even_array);


}

**
 * This function will traverse through and array and print out the odd numbers of the array.
 *
void odd_members_of_the_array(vector<int> some_array)
{
        int counter = 0, flag = 0;

        for (counter = 0; counter <= some_array.size(); counter++)
        {
                if (some_array[counter] % 2 != 0)
                {
                        flag++;
                }
        }
        vector<int> odd_array(flag);

        for (counter = 0; counter < odd_array.size(); counter++)
        {
                if (some_array[counter] % 2 != 0)
                {
                        odd_array[counter] = some_array[counter];
                }
        }
	print_array("The odd elements in this array are:", odd_array);
        


}*/
