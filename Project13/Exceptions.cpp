// Abigail Reitz
// CIS 1202 803
// July 28, 2025

#include <iostream>

using namespace std;

char character(char start, int offset) {
	if (!isalpha(start)) {
		throw "invalidCharacterException";
	}
	int target = start;
	target = target + offset;
	if (target >= 65 && target <= 90) {
		char targetChar = static_cast<char>(target);
		if (islower(start) && isupper(targetChar)) {
			throw "invalidRangeException";
		}
		else {
			return targetChar;
		}
	}
	else if (target >= 97 && target <= 122) {
		char targetChar = static_cast<char>(target);
		if (isupper(start) && islower(targetChar)) {
			throw "invalidRangeException";
		}
		else {
			return targetChar;
		}
	}
	else {
		throw "invalidRangeException";
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