///////////////
//Kelsey Segren
//EX03_01
//MyPoint class 9.4
//////////////

/*UML Diagram: 
Class:											MyPoint
Data Fields:								double x, double y
constructors and functions:						MyPoint()
										MyPoint(double point1, double point2)												double getx()
												double gety()
												double getx()
												double distance (MyPoint p)
*/												

#include <iostream>
#include "MyPoint.h"

int main() {

//Test program with two points (0,0) and (10,30.5)

	MyPoint p1;
	MyPoint p2(10, 30.5);

	double d = p1.distance(p2);


	cout << d << endl;

	return 0;
}