////////////////
//Kelsey Segren
//EX03_05
//10.10
/////////////


#ifndef MYINTEGER_H_
#define MYINTEGER_H_

#include <iostream>
#include <sstream> 
using namespace std;

class MyInteger
{
	//an int data field named value that stores the int value represented by this object
private:
	int value;

public:
	//A constructor that creates a MyInteger object for the specified int value
	MyInteger(int anyValue) {
		value = anyValue;
	}

	//a constant get function that returns the int value
	const int getValue() {
		return value;
	}

	//Constant functions isEven(), isOdd(), and isPrime() that return true if the value is even, odd
	// or prime, respectively
	const bool isEven() {
		if (value % 2 == 0)
			return true;
		else
			return false;
	}
	
	const bool isOdd() {
		if (value % 2 != 0)
			return true;
		else
			return false;
	}

	const bool isPrime() {
		for (int i = 2; i < value; i++)
		{
			if (value% i == 0)
				return false;
			else
				return true;
		}
			
	}
		   
	//static functions isEven(int), isOdd(int), isPrime(int) that return true if the specified value
	//is even, odd, or prime, respectively
	static bool isEven(int value)
	{
		if (value % 2 == 0)
			return true;
		else
			return false;
	}
	static bool isOdd(int value) {
		if (value % 2 != 0)
			return true;
		else
			return false;
	}
	static bool isPrime(int value) {
		for (int i = 2; i < value; i++)
		{
			if (value% i == 0)
				return false;
			else
				return true;
		}
	}

	//static functions isEven(const MyInteger&), isOdd(const MyInteger&), isPrime(const MyInteger&) that 
	//return true if the value in the object is even, odd, or prime, respectively
	static bool isEven(const MyInteger& I) {
		return true;
	}
	static bool isOdd(const MyInteger& I) {
		return true;
	}

	static bool isPrime(const MyInteger&) {
		return true;
	}
	//constant functions equals(int) and equals(const MyInteger&) that return true if the value 
	//in the object is equal to the specified value
	const bool equals(int newValue) {
		return value == newValue;
	}

	const bool equals(MyInteger& I) {
		return equals(I.getValue());
	}

	//a static function parseInt(const string&) that converts a string to an int value
	static int parseInt(const string& s)
	{
		stringstream ss(s);
		int i;
		ss >> i;
		return i;
	}

};


#endif
