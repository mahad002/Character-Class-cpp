#include "Character.h"
#include <iostream>
#include <stdio.h>
#include <string>


using namespace std;


Character::Character()
{
	i = 0;
	s = NULL;
}

Character::Character(int x)
{
	s = static_cast<char>(x); //s is member function character
	i = x;

	//s(1, y);
}

Character::Character(string x)
{
	s = x[0]; //s is member function character
	//s(1, y);
	i = int(s);
}

void Character::set(char x) {
	//cin.clear();
	//cin.ignore(256,"\n");
	s = x; //s is member function character
	i = int(s);
}

void Character::setObj(const Character& C) {
	i = C.i;
	s = C.s;
}

bool Character::isEqualTo(Character C) {
	bool equal = false;
	if (s == C.getS()) { //s is member function character
		equal = true;
	}
	return equal;
}

bool Character::isNotEqualTo(Character C) {
	bool equal = true;
	if (s != C.getS()) { //s is member function character
		equal = false;
	}
	return equal;
}

bool Character::isGreaterThan(Character C) {
	bool greater = false;
	if (s > C.getS()) { //s is member function character
		greater = true;
	}
	return greater;
}
bool Character::isLessThan(Character C) {
	bool less = false;
	if (s < C.getS()) { //s is member function character
		less = true;
	}
	return less;
}
bool Character::isGreaterThanOrEqualTo(Character C) {
	bool greater = false;
	if (s >= C.getS()) { //s is member function character
		greater = true;
	}
	return greater;
}
bool Character::isLessThanOrEqualTo(Character C) {
	bool less = false;
	if (s <= C.getS()) { //s is member function character
		less = true;
	}
	return less;
}
bool Character::isAlpha() {
	bool alpha = false;
	if ((i >= 97 && i <= 122) || (i >= 65 && i <= 90)) {
		alpha = true;
	}
	return alpha;
}
bool Character::isNum() {
	bool  num = false;
	if (i >= 48 && i <= 57) {
		num = true;
	}
	return num;
}
bool Character::isLower() {
	bool lower = false;
	if (i >= 97 && i <= 122) {
		lower = true;
	}
	return lower;
}
bool Character::isUpper() {
	bool upper = false;
	if (i >= 65 && i <= 90) {
		upper = true;
	}
	return upper;
}

void Character::toLower() {
	if (i >= 65 && i <= 90) {
		i += 32;
		s = char(i); //s is member function character
	}
}

void Character::toUpper() {
	if (i >= 97 && i <= 122) {
		i -= 32;
		s = char(i); //s is member function character
	}
}

string Character::stringValue() {
	string x = "";
	x += s; //s is member function character
	return x;
}
Character Character::plus(const Character& C) {
	Character C1;
	C1.setI(i + C.i);
	return C1;
}
Character Character::minus(const Character& C) {
	Character C1;
	C1.setI(i - C.i);
	return C1;
}
