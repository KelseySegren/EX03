#include <iostream>
using namespace std;
#include "MyInteger.h"
/*UML Diagram:
Class:										MyInteger
Data Fields:								int value
Constructors & Functions:					MyInteger(int)
											const int getValue
											const bool isEven()
											const bool isOdd()
											const bool isPrime()
											static bool isEven(int)
											static bool isOdd(int)
											static bool isPrime(int)
											static bool isEven(const MyInteger&)
											static bool isOff(const MyInteger&)
											static bool isPrime(const MyInteger&)
											const int equals(int)
											const int equals(const MyInteger&)
											static int parseInt(const string&)
*/


int main() {

	MyInteger p1(10);
	MyInteger p2(7);
	MyInteger p3(33);
	MyInteger p4(22);

	if (p1.isEven()) {
		cout << "It is even. ";
	}

	if (MyInteger::isEven(10))
	{
		cout << "It works!" << endl;
	}

	if (p2.isPrime()) {
		cout << "It is prime. ";
	}
	if (MyInteger::isPrime(7)) {
		cout << "It works! " << endl;
	}

	if (p3.isOdd()) {
		cout << "It is odd. ";
	}
	if (MyInteger::isOdd(33)) {
		cout << "It works! " << endl;
	}

	return 0;
}

