#include "Character.h"
#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main()
{
	char x;
	Character C, C1(50), C2('5');
	if (C1.isEqualTo(C2)) {
		cout << "They both are Equal!\n";
	}
	if (C1.isNotEqualTo(C2)) {
		cout << "They both are not Equal!\n";
	}
	if (C1.isGreaterThan(C2)) {
		cout << "C1 is greater than C2!\n";
	}
	if (C1.isGreaterThanOrEqualTo(C2)) {
		cout << "C1 is greater than or Equal to C2!\n";
	}
	if (C1.isLessThan(C2)) {
		cout << "C1 is less than C2!\n";
	}
	if (C1.isLessThanOrEqualTo(C2)) {
		cout << "C1 is less than C2!\n";
	}
	if (C1.isAlpha()) {
		cout << "C1 is alphabet!\n";
		if (C1.isLower()) {
			cout << "C1 is a Lower Character!\n";
			cout << "Would like to make it a Upper Character?Y/N\n";
			cin >>x;
			if (x == 'Y' || x == 'y' || x == 'N' || x == 'n') {
				cout << "Before: " << C1.getS() << endl;
				C1.toUpper();
				cout << "After: " << C1.getS() << endl;
			}
		}
		else if (C1.isUpper()) {
			cout << "C1 is a Upper Character!\n";
			cout << "Would like to make it a Lower Character?Y/N\n";
			cin >>x;
			if (x == 'Y' || x == 'y' || x == 'N' || x == 'n') {
				cout << "Before: " << C1.getS() << endl;
				C1.toLower();
				cout << "After: " << C1.getS() << endl;
			}
		}
	}
	if (C2.isAlpha()) {
		cout << "C2 is Alphabet!\n";
		if (C2.isLower()) {
			cout << "C2 is a Lower Character!\n";
			cout << "Would like to make it a Upper Character?Y/N\n";
			cin >>x;
			if (x == 'Y' || x == 'y' || x == 'N' || x == 'n') {
				cout << "Before: " << C2.getS() << endl;
				C2.toUpper();
				cout << "After: " << C2.getS() << endl;
			}
		}
		else if (C2.isUpper()) {
			cout << "C2 is a Upper Character!\n";
			cout << "Would like to make it a Lower Character?Y/N\n";
			cin >>x;
			if (x == 'Y' || x == 'y' || x == 'N' || x == 'n') {
				cout << "Before: " << C2.getS() << endl;
				C2.toLower();
				cout << "After: " << C2.getS() << endl;
			}
		}
	}
	if (C1.isNum()) {
		cout << "C1 is a Numeric Value!\n";
	}
	if (C2.isNum()) {
		cout << "C2 is a Numeric Value!\n";
	}
	cout << "C1 as string: " << C1.stringValue() << endl;
	cout << "C2 as String: " << C2.stringValue() << endl;
	C.setObj(C1.plus(C2));
	cout << "By adding C1 and C2: " << C.getS() << endl;
	C.setObj(C1.minus(C2));
	cout << "By subtracting C1 and C2: " << C.getS() << endl;

}