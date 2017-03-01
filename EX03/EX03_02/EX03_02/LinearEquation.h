
#include <cmath>
#include <iostream>
using namespace std;

#ifndef LINEAREQUATION_H
#define LINEAREQUATION_H

class LinearEquation
{
//private data fields a,b,c,d,e,f
private:
	double a, b, c, d, e, f;

public: 
	//a constructor with arguments for a,b,c,d,e,f
	LinearEquation(double A1, double B1, double C1, double D1, double E1, double F1) {
		a = A1;
		b = B1;
		c = C1;
		d = D1;
		e = E1;
		f = F1;
	}
//six get functions for a,b,c,d,e,f
	double geta(){
		return a;
	}

	double getb() {
		return b;
	}

	double getc() {
		return c;

	}

	double getd() {
		return d;
	}

	double gete() {
		return e;
	}

	double getf() {
		return f;
	}

	//a function named isSolvable() that returns true if ad-bc is not 0
	bool isSolvable() {
		if ((a*d) - (b*c) == 0)
			return false;
		else
			return true;
	}

	//functions getX() and getY() that return the solution for the equation
	double getX() {
		return ((e*d) - (b*f)) / ((a*d) - (b*c));
		
	}

	double getY() {
		return  ((a*f) - (e*c)) / ((a*d) - (b*c));
		
	}


};

#endif