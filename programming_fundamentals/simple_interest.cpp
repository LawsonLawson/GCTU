#include <iostream>
#include <limits>

using namespace std;

/* function prototype to compute the simple interest */
float calculate_simple_interest(float x, float y, float z);

/* function prototype to validate the user input */
float validate_user_input(string user_prompt);


int main()
{
	/* make function calls to validate all 3 of user's input */
	float P = validate_user_input("Please enter the principal (GHC)\n");
	float T = validate_user_input("Please enter the time (years)\n");
	float R = validate_user_input("Please enter the rate\n");

	/* make a function call to compute the simple interest */
	float SI = calculate_simple_interest(P, T, R);

	/* display results */
	cout << "The simple interest on principal GHC " << P << " for " <<
		T << " years at a rate of " << R << "% is GHC " << SI << "\n";

	return (0);
}

/**
 * calculate_simple_interest : This function computes the simple interest.
 * @parameter x(float) : The principal - The initial amount of money borrowed
 * or invested.
 * @parameter y(float) : The time - The duration (in years) for which the
 * money is borrowed or invested.
 * @parameter z(float) : The rate - The annual interest rate (expressed as a
 * percentage).
 * returns(float) : This function returns the simple interest.
 */
float calculate_simple_interest(float x, float y, float z)
{
	/* compute the simple interest with the parameters passed */
	float SI = x * y * (z / 100);

	/* return simple interest */
	return (SI);
}

/**
 * validate_user_input : This function validates the input of the user.
 * @parameter user_prompt(string) : The prompt to display to the user for a
 * specific response.
 * returns(float) : This function returns a valid user else prompts user for
 * a valid input.
 */
float validate_user_input(string user_prompt)
{
	float return_value;

	while (true)
	{
		/* display the prompt */
		cout << user_prompt;

		/* insert the user input into the return_value variable */
		cin >> return_value;

		/* check if insertion failed, thus if cin.fail() return 1 (true) */
		if (cin.fail())
		{
			/* insertion failed so print error message */
			cout << "\nInvalid input !.. Please enter a valid input\n\n";

			/* clear error flag */
			cin.clear();

			/* discard the invalid input which couldn't be inserted */
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}

		/* check if the user entered a number less than 0 */
		else if (return_value <= 0)
		{
			/* if yes, let's prompt them to do the right thing */
			cout << "\nPlease enter a number greater than 0\n\n";
		}

		else
		{
			/* cin.fail() returned false 0, so we return valid input*/
			return (return_value);
		}
	}
}
