// Abigail Reitz
// CIS 1202 803
// July 28, 2025

#include <iostream>

using namespace std;

char character(char start, int offset) { // character function
	if (!isalpha(start)) { // if not a character:
		throw "invalidCharacterException"; // throw an exception
	}
	int target = start; // make the start value an ASCII value
	target = target + offset; // add the offset value
	if (target >= 65 && target <= 90) { // if the target ASCII value is between A and Z (in ASCII):
		char targetChar = static_cast<char>(target); // turn target to a character
		if (islower(start) && isupper(targetChar)) { // if lower to upper conversion:
			throw "invalidRangeException"; // throw exception
		}
		else { 
			return targetChar; // return target character
		}
	}
	else if (target >= 97 && target <= 122) { //if the target ASCII value is between a and z (in ASCII):
		char targetChar = static_cast<char>(target); // turn target to character
		if (isupper(start) && islower(targetChar)) { // if upper to lower conversion:
			throw "invalidRangeException"; // throw exception
		}
		else {
			return targetChar; // return target character
		}
	}
	else {
		throw "invalidRangeException"; // throw exception if not in those ASCII values
	}
}

int main() {
	try { 
		cout << character('a', 1) << endl;
	}
	catch (...) {
		cout << "ERROR" << endl;
	}
	try {
		cout << character('a', -1) << endl;
	}
	catch (...) {
		cout << "ERROR" << endl;
	}
	try {
		cout << character('Z', -1) << endl;
	}
	catch (...) {
		cout << "ERROR" << endl;
	}
	try {
		cout << character('?', 5) << endl;
	}
	catch (...) {
		cout << "ERROR" << endl;
	}
	try {
		cout << character('A', 32) << endl;
	}
	catch (...) {
		cout << "ERROR" << endl;
	}
	return 0;
}
