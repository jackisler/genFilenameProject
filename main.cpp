#include <iostream>
#include <array>
#include <string>
#include "spaceToUnderscore.h"

using namespace std;

int main() {
	// Declare a variable named 'input_string' to hold input.
	string input_string;

	// Read a full line of input from stdin (cin) and save it to our variable, input_string.
	cout << "Input text: ";
	getline(cin, input_string);
	cout << endl;

	//Function to convert text spaces into underscore
	cout << "Filename text: " << spaceToUnderscore(input_string) << endl;
	//Holds output window open in Visiual Studio
	cin.clear();
	cin.ignore();
	cin.get();

	return 0;
}