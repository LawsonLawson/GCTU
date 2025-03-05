#include <iostream>
#include <limits>

using namespace std;

/* function prototype to compute the commission and validate user input */
double calculate_commission(double sales_amount);
double validate_user_input(string user_prompt);


int main()
{
	double sales_amount, commission;

	/* prompt user for sales amount */
	sales_amount = validate_user_input("Please enter the sales amount\n");

	/* compute the commission */
	commission = calculate_commission(sales_amount);

	cout << "Your commission is: GHC " << commission << endl;

	return (0);
}

/**
 * calculate_commission: This function computes the commission based on a given
 * rate.
 * @sales_amount(double): This is the amount of sales the user enters.
 *
 * returns(double): The commission based on the given rate to the user.
 */
double calculate_commission(double sales_amount)
{
	double commission_rate, commission, minimum_sales_amount = 30000.00;

	/* check if sales amount is greater or equal to minimum sales amount */
	if (sales_amount >= minimum_sales_amount)
	{
		/* assign commission rate based on instruction */
		commission_rate = 0.25;

		/* compute commission */
		commission = commission_rate * sales_amount;
	}
	else
	{
		/* else assign the altenative rate based on instruction */
		commission_rate = 0.15;

		/* compute commission */
		commission = commission_rate * sales_amount;
	}

	/* return the commission to the caller of the function */
	return (commission);
}
/**
 * validate_user_input: This function validates the input of the user.
 * @parameter user_prompt(string): The prompt to display to the user for a
 * specific response.
 * returns(double): This function returns a valid user else prompts user for
 * a valid input.
 */
double validate_user_input(string user_prompt)
{
        double return_value;

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
                        cout << "\nInvalid input !.. Please enter a valid sales amount\n\n";

                        /* clear error flag */
                         cin.clear();

                        /* discard the invalid input which couldn't be inserted */
                         cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }

                /* check if the user entered a number less than 0 */
                else if (return_value <= 0)
                {
                        /* if yes, let's prompt them to do the right thing */
                        cout << "\nPlease enter a positive sales amount. Your sales cannot be negative!\n\n";
                }

                else
                {
                        /* cin.fail() returned false 0, so we return valid input*/
                        return (return_value);
                }
        }
}
