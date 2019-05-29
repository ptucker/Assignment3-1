#ifndef myinteger_h
#define myinteger_h

#include <iostream>

class MyInteger {
public: 
	int value;

	MyInteger(int);
	int getValue() const;

	bool isEven() const;
	bool isOdd() const;
	bool isPrime() const;

	static bool isEven(int);
	static bool isOdd(int);
	static bool isPrime(int);


	static bool isEven(const MyInteger&);
	static bool isOdd(const MyInteger&);
	static bool isPrime(const MyInteger&);

	bool equals(int) const;
	bool equals(const MyInteger&) const;

	//static int parseInt(const std::string&);
	// I can't ge this one working
};

#endif