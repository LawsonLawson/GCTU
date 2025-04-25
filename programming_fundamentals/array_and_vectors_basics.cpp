#include <iostream>
#include <vector>

/**
 * main : So these are just some functions making use of vector which I learnt
 * just today. It is to test my basic understanding before I dive deeper.
 * Array typically will require I hardcode my size, and use them in loops but
 * vector gives much more advantage. Vector is more like arrays on steroids.
 * I don't need to specify the size and neither do I need to set all the
 * elements to zero. I can push_back(add to the end), pop, etc.
 */

void alphabet_to_unicode();
void list_planets();
void unicode_to_alphabet();


using namespace std;

int main()
{
	// Let's just make function calls ...
	alphabet_to_unicode();

	list_planets();

	unicode_to_alphabet();

	return (0);
}


void alphabet_to_unicode()
{
	int i = 0;
        vector<char> letters = {
                'A', 'B', 'C',
                'D', 'E', 'F',
                'G', 'H', 'I',
                'J', 'K', 'L',
                'M', 'N', 'O',
                'P', 'Q', 'R',
                'S', 'T', 'U',
                'V', 'W', 'X',
                'Y', 'Z', 'a',
                'b', 'c', 'd',
                'e', 'f', 'g',
                'h', 'i', 'j',
                'k', 'l', 'm',
                'm', 'n', 'o',
                'p', 'q', 'r',
                's', 't', 'u',
                'v', 'w', 'x',
                'y', 'z'
        };

        cout << "ALPHABET" << "\t\t" << "UNICODE" << endl;
        cout << "--------" << "\t\t" << "-------" << endl;

        do
        {
                cout << letters[i] << "\t\t\t" << static_cast<int>(letters[i]) << endl;
                i++;
        } while (i < (letters.size()));

}

void list_planets()
{
        vector<string> planets = {
                "Mercury", "Venus",
                "Earth", "Mars",
                "Jupiter", "Saturn",
                "Uranus", "Neptune",
                "Pluto"
        };

        for (string i : planets)
        {
                cout << i << endl;
        }

}

void unicode_to_alphabet()
{
        vector<char> letters(54);
        int i = 0, j = 64;

        cout << "UNICODE" << "\t\t" << "ALPHABET" << endl;
        cout << "-------" << "\t\t" << "--------" << endl;

        for (i = 0; i < letters.size(); i++)
        {
                letters[i] = j;
                j++;
        }
        j = 64;
        for (i = 0; i < letters.size(); i++)
        {
                cout << j << "\t\t\t" << static_cast<char>(letters[i]) << endl;
                j++;
        }

}
