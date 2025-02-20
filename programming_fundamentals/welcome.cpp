#include <iostream>

using namespace std; // to avoid using std:: , lets declare this line

void user_input()
{
        // declare a variable of <string> data type to store the user input
        string name;

        // prompt the user for thier name
        cout << "Hello there, what is your name?\n";

        // using getline, lets capture the full name of the user
        getline(cin, name);

        // now display the user's name back to him or her
        cout << "Hello " << name << ", It is nice to meet you.\n";
}

// main function
int main()
{
        // Make a function call
        user_input();

        // return 0 .. success
        return (0);
}
