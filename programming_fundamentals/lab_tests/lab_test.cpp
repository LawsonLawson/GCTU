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
#include <limits>

using namespace std;


/**
 * main : This program will help determine the grade of a student based on the
 * marks (int/float) provided by the user.
 *
 * returns : 0 upon successful running of the program, 1 otherwise.
 */


int main()
{
	float score; char grade;

	cout << "Please enter the student's mark \n";
	cin >> score;

	if (cin.fail() || score < 0 || score > 100)
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "You entered an invalid input. Please enter a number between 0 and 100\n";
		exit(99);
	}
	grade = (score >= 70) ? 'A':
		(score >= 60) ? 'B':
		(score >= 50) ? 'C':
		(score >= 40) ? 'D': 'F';
	
	cout << "The grade for a score of " << score << " is " << grade << "\n";

	return 0;
}
