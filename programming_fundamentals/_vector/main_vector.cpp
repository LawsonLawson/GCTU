#include "header.h"

int main()
{
	vector<int> array = generate_an_array_from_user(5);

	print_the_elements_of_the_array(array);

	write_array_into_a_file(array);

	read_array_from_a_file_and_print_it(array);

	lowest_element_of_the_array(array);

	highest_element_of_the_array(array);

	sum_of_elements_of_the_array(array);

	product_of_the_elements_of_the_array(array);

	sum_of_elements_of_two_arrays(array, array);

	product_of_the_elements_of_two_arrays(array, array);

	/*even_members_of_the_array();

	odd_members_of_the_array();
	
	average_of_the_members_of_the_array();

	compare_whether_two_given_arrays_are_equal*/

	return 0;
}
