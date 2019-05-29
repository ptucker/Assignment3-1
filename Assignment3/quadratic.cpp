#include "quadratic.h"
#include <iostream>

QuadEq::QuadEq(double newA, double newB, double newC) {
	a = newA;
	b = newB;
	c = newC;
}

double QuadEq::getA() {
	return a;
}
double QuadEq::getB() {
	return b;
}
double QuadEq::getC() {
	return c;
}

double QuadEq::getDiscriminant() {
	return (b * b) - (4 * a * c);
}

double QuadEq::getRoot1() {
	if (((b * b) - (4 * a * c)) > 0) {
		return (0 - b + sqrt((b * b) - 4 * a * c)) / (2 * a);
	}
	else {
		return 0;
	}
}
double QuadEq::getRoot2() {
	if (((b * b) - (4 * a * c)) > 0) {
		return (0 - b - sqrt((b * b) - 4 * a * c)) / (2 * a);
	}
	else {
		return 0;
	}
}