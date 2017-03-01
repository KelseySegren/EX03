/////////////
//Kelsey Segren
//EX03_02
//LinearEquation
///////////////

/*UML Diagram
Class:										LinearEquation
Data FIelds:								double: a,b,c,d,e,f
constructors and functions:					double geta(), getb()...
											bool isSolvable()
											double getX(), double getY()
											LinearEquation (double, double, double, double, double, double)
											
*/
#include <iostream>
using namespace std;
#include "LinearEquation.h"


int main() {

	//ask user for 6 values
	double A, B, C, D, E, F;
	cout << "Enter 6 values: " << endl;
	cin >> A >> B >> C >> D >> E >> F;
	cout << endl;

	cout << "You entered the values: " << endl;
	cout << A << " " << B << " " << C << " " << D << " " << E << " " << F << endl << endl;


	//displays the results of the two linear equations
	cout << "First Linear Equation: " << A << "x + " << B << "y = " << E << endl;
	cout << "Second Linear Equation: " << C << "x + " << D << "y = " << F << endl << endl;

	//report that the equation has no solution if ad-bc is 0
	LinearEquation p2(A, B, C, D, E, F);
	bool x = p2.isSolvable();
	if (x == true) {
		cout << "X = " << p2.getX() << endl;
		cout << "Y = " << p2.getY() << endl;
	}
	else
		cout << "The equation has no solution." << endl;


	return 0;
}