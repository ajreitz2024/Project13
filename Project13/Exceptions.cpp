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
	}
	else if (target >= 97 && target <= 122) {
		char targetChar = static_cast<char>(target);
	}
	else {
		throw "invalidRangeException";
	}
}

int main() {
	return 0;
}