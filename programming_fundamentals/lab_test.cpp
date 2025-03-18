/**
 * Prof. Richard Lomotey teaches a course in Mobile Computing and uses a
 * grading scale for his course. He has asked you to write a C++ program
 * that will allow him to enter a student’s mark and then the grade for
 * that score is displayed.
 *
 * Mark     Grade
 * 70–100    A
 * 60-69     B
 * 50-59     C
 * 40–49     D
 * 0–39      F
 */

#include <iostream>

using namespace std;


/**
 * main : This program will help determine the grade of a student based on the
 * marks (int/float) provided by the user.
 *
 * returns : 0 upon successful running of the program, 1 otherwise.
 */


int main()
{
	float score;

	cout << "Please enter the student's mark \n";

	cin >> score;

	if (score >= 70 && score <= 100)
	{
		cout << "The grade for " << score <<  " is 'A'\n";
	}
	else if (score >= 60 && score < 70)
	{
		cout << "The grade for " << score <<  " is 'B'\n";
	}
	else if (score >= 50 && score < 60)
	{
		cout << "The grade for " << score <<  " is 'C'\n";
	}
	else if (score >= 40 && score < 50)
	{
		cout << "The grade for " << score <<  " is 'D'\n";
	}
	else if (score >= 0 && score < 40)
	{
		cout << "The grade for " << score <<  " is 'F'\n";
	}
	else
	{
		cout << "You entered an invalid score.\nThe grading system is based on a score from 0 to 100.\n";
	}

	return 0;
}
