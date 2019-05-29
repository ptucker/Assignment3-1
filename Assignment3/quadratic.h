#ifndef quadratic_h
#define quadratic_h

class QuadEq {
public:
	QuadEq(double, double, double);

	double a;
	double b;
	double c;

	double getA();
	double getB();
	double getC();

	double getDiscriminant();

	double getRoot1();
	double getRoot2();
};

#endif