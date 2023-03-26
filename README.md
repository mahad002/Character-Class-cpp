# Character-Class-

Implementation of Character Class – Your goal is to implement “Character" class. You will need to write three
files (Character.h, Character.cpp and Q5.cpp). Your implemented class must fully provide the definitions of following

class (interface) functions. Please also write down the test code to drive your class implementation. Please note that
we will be running your code against our test code and any segmentation faults or incorrect result will result in loss
of marks.

class Character{
    // think about the private data members...
    public:
    //include all the necessary checks before performing the operations in the
    functions
    Character();// a default constructor
    Character(int);// a parametrized constructor
    Character(String); // a parametrized constructor
    void set(char);//set value
    isEqualTo(Character); //Compares two Character objects numerically
    isNotEqualTo(Character);
    isGreaterThan(Character);
    isLessThan(Character);
    isGreaterThanOrEqualTo(Character);
    isLessThanOrEqualTo(Character);
    isAlpha();//checks if the Character is an alphabet
    isNum();//checks if the Character is a number
    isLower();//check for lower case
    isUpper();//check for upper case
    toUpper();//convert a lowercase alphabet to uppercase
    toLower();//convert a uppercase alphabet to lowercase
    String stringValue(); //Returns the value of this character as a string
    Character plus(const Character&); //adds two Characters and return the result
    Character minus(const Character&); // subtracts two Characters and return the
    result
};
