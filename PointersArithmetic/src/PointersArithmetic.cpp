#include <iostream>
using namespace std;

int main() {

	const int NSTRINGS = 5;
	string texts[NSTRINGS] = { "one", "two", "three", "four", "five" };

	string *pTexts = texts;

	pTexts += 3;

	cout << *pTexts << endl;

	pTexts -= 2;

	cout << *pTexts << endl;

	string *pEnd = &texts[NSTRINGS];
	pTexts = &texts[0];

	while (pTexts != pEnd) {
		cout << *pTexts << endl;
		pTexts++;
	}

	// Set pTexts back to start.
	pTexts = &texts[0];
	long elements = (long) (pEnd - pTexts); // get numbers of elements in a array

	cout << elements << endl;

	pTexts += NSTRINGS / 2;
	cout << *pTexts << endl;

	return 0;
}
