#pragma once
#include<iostream>
#include <string>

using namespace std;

class Character {
private:
	int i;
	//string s;
	char s;
public:
	int getI() {
		return this->i;
	}
	void setI(int i) {
		this->i = i;
		this->s = char(i);
	}


	char getS() {
		return this->s;
	}
	void setS(char s) {
		this->s = s;
		this->i = int(s);
	}

	//include all the necessary checks before performing the operations in the functions
	Character();// a default constructor
	Character(int);// a parametrized constructor
	Character(string); // a parametrized constructor
	void set(char);//set value
	void setObj(const Character&);
	bool isEqualTo(Character); //Compares two Character objects numerically
	bool isNotEqualTo(Character);
	bool isGreaterThan(Character);
	bool isLessThan(Character);
	bool isGreaterThanOrEqualTo(Character);
	bool isLessThanOrEqualTo(Character);
	bool isAlpha();//checks if the Character is an alphabet
	bool isNum();//checks if the Character is a number
	bool isLower();//check for lower case
	bool isUpper();//check for upper case
	void toUpper();//convert a lowercase alphabet to uppercase
	void toLower();//convert a uppercase alphabet to lowercase
	string stringValue(); //Returns the value of this character as a string
	Character plus(const Character&); //adds two Characters and return the result
	Character minus(const Character&); // subtracts two Characters and return the result
};