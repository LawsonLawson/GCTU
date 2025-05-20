#ifndef HEADER_FILE
#define HEADER_FILE

#include <iostream>
#include <fstream>
#include <vector>
#include <limits>

using namespace std;


vector<int> generate_an_array_from_user(int size);
int print_the_elements_of_the_array(vector<int> some_array);
void write_array_into_a_file(vector<int> some_array);
void read_array_from_a_file_and_print_it(vector<int> some_array);
void lowest_element_of_the_array(vector<int> some_array);
void highest_element_of_the_array(vector<int> some_array);
void sum_of_elements_of_the_array(vector<int> some_array);
void product_of_the_elements_of_the_array(vector<int> some_array);
void sum_of_elements_of_two_arrays(vector<int> first_array, vector<int> second_array);
void product_of_the_elements_of_two_arrays(vector<int>first_array, vector<int>second_array);
// void even_members_of_the_array(vector<int> some_array);
//void odd_members_of_the_array(vector<int> some_array);
void print_array(string prompt, vector<int> some_array);


#endif /* HEADER_FILE */
