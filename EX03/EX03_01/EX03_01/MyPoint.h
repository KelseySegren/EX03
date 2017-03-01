using namespace std;
#include <cmath>
#ifndef MYPOINT_H
#define MYPOINT_H

class MyPoint
{
private:
	//Two-data fields x and y that represent the coordinates
	double x;
	double y;

public:

	//No-Arg Constructor
	MyPoint() {
		x = 0;
		y = 0;
	}

	//A constructor that constructs a point with specified coordinates
	MyPoint(double point1, double point2) {
	   x = point1;
	   y = point2;
	}

	//Two get functions for data fields x and y
	double getx() {
		return x;
	}

	double gety() {
		return y;
	}
	
	/*A function named distance that returns the distance from this point to another point of
	the MyPoint type */
	double distance(MyPoint p) {
		return sqrt((p.getx()-x)*(p.getx() - x) + (p.gety() - y)*(p.gety() - y));
	 
	}
};

#endif