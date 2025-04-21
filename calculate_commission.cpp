/**
 * Write an if/else statement that assigns 0.15 to commissionRate and calculate
 * commission earned unless sales is greater than or equal to 30,000.00 in
 * which case it assigns 0.25 to commissionRate and calculate commission earned
 */

/* solution */
#include <iostream>
#include <limits>

/**
 * Step 1 - A function that will display a welcome message to the user. (Optional)
 * Step 2 - A function that will prompt and validate the user input.
 * Step 3 - A function that will compute the commission.
 */

using namespace std;


/* function prototypes */
void display_welcome_message();
double prompt_and_validate_user_input(string user_prompt);
double calculate_commission(double sales_amount);

/* constants declaration */
const double HIGH_COMMISSION_RATE = 0.25, LOW_COMMISSION_RATE = 0.15;
const double MINIMUM_SALES_AMOUNT = 30000.00;

/* program entry */
int main()
{
	/* a variable to store the user sales amount */
	double sales_amount, commission;

	/* display a welcome message about the program */
	display_welcome_message();

	/* prompt the user for an input */
	sales_amount = prompt_and_validate_user_input("\nPlease enter your sales amount (GHC): \n");

	/* compute the commission given the rate */
	commission = calculate_commission(sales_amount);

	cout << "\nYour commission on a sales amount of GHC " << sales_amount << " is GHC " << commission << "\n";

	return (0);
}

/**
 * display_welcome_message : This function does nothing but displays a welcome
 * message to the user of the program so they know what the program does.
 */
void display_welcome_message()
{
	string display_message = "Hello there! and welcome to the commission calculator !";

	/* display the message */
	cout << display_message;
}

/**
 * prompt_and_validate_user_input : This function is responsible from getting
 * an input from the user and making sure that the user gives the input the
 * program is expecting.
 *
 * @user_prompt(string) : The input string to display to the user.
 *
 * returns(double) : Returns a valid input (float), in this case the sales
 * amount back to the caller of this function.
 */
double prompt_and_validate_user_input(string user_prompt)
{
	/* a variable to hold the return value, that is the user input */
	double return_value;

	/* display user prompt */
	cout << user_prompt;

	/* let's keep prompting the user till we get what we want */
	while (true)
	{
		/* insert the input into the return value */
		cin >> return_value;

		/* should this fail because the input is invalid ..*/
		if (cin.fail() || return_value <= 0)
		{
			/* display an error message to the user */
			cout << "\nInvalid input! Please enter a valid sales amount (GHC): \n";

			/* clear the error */
			cin.clear();

			/* and clear the unwanted input as well */
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		/* should our conditions be met .. */
		else
		{
			/* let's return the valid input */
			return (return_value);
		}
	}
}

/**
 * calculate_commission : This function computes the commission based on a
 * given amount of sales and a commissionRate.
 *
 * sales_amount(double) : This is the sales amount the user enters.
 *
 * returns (double) : The commission.
 */
double calculate_commission(double sales_amount)
{
	/* a variable to hold the commission */
	double commission;

	/* check if sales amount attracts a high or a low commission rate */
	sales_amount >= MINIMUM_SALES_AMOUNT ?
		/* use the high commission rate to compute the commission */
		commission = sales_amount * HIGH_COMMISSION_RATE
	: 
		/* use the low commission rate to compute the commission */
		commission = sales_amount * LOW_COMMISSION_RATE;

	/* return the commission */
	return (commission);
}
