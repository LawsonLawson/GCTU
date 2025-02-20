#include <iostream>
#include <limits>  // For input validation

using namespace std;

float getValidInput(string prompt)
{
    float value;
    while (true) {
        cout << prompt;
        cin >> value;

        if (cin.fail()) {
            cout << "Invalid input! Please enter a valid number.\n";
            cin.clear();  // Clear error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Discard invalid input
        } else {
            return value;  // Return the valid input
        }
    }
}

int main()
{
    // Get valid user inputs
    float P = getValidInput("Please enter the principal: ");
    float T = getValidInput("Please enter the time (years): ");
    float R = getValidInput("Please enter the rate: ");

    // Compute simple interest
    float SI = P * T * (R / 100);

    // Display the result
    cout << "The simple interest on GHC" << P << " for " << T << " years at a rate of " << R << "% is GHC" << SI << "\n";

    return 0;
}
