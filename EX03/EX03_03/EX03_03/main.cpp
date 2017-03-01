//////////////
//Kelsey Segren
//9.10
//EX03_03
///////////////

#include "LinearEquation.h"
#include <iostream>
using namespace std;

//sample run: 2 2 5 -1 4 2 -1 -2
//sample run: 2 2 7 6 4 2 -1 -2

int main() {
	//asks user for the endpoints
	double x1, y1, x2, y2, x3, y3, x4, y4 = 0;
	cout << "Enter values for x1, y1, x2, y2, x3, y3, x4, y4 " << endl;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
	cout << "You entered: " << endl;
	cout << "(x1, y1): " <<  "( " << x1 << " , " << y1 << " ) " << endl;
	cout << "(x2, y2): " << "( " << x2 << " , " << y2 << " ) " << endl;
	cout << "(x3, y3): " << "( " << x3 << " , " << y3 << " ) " << endl;
	cout << "(x4, y4): " << "( " << x4 << " , " << y4 << " ) " << endl;


	double a = y1 - y2;
	double b = x1 - x2;
	double c = y3 - y4;
	double d = x3 - x4;

	double e = (a * x1 )- (b * y1);
	double f = (c * x3) - (d * y3);

	//Finds the intersecting point
	LinearEquation p2(a, b, c, d, e, f);
	bool x = p2.isSolvable();
	if (x == true) {
		cout << "The lines intersect at: " << " ( " << p2.getX() << " , " << p2.getY() << " ) ";
	}
	else
		cout << "The lines are parallel. " << endl;

}






