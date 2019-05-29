#include "myInteger.h"

MyInteger::MyInteger(int newVal) {
	value = newVal;
}

int MyInteger::getValue() const {
	return value;
}
	

bool MyInteger::isEven() const { 
	if (value == ((value / 2) * 2)) {
		return true;
	}
	else {
		return false;
	}
}
bool MyInteger::isOdd() const {
	if (value - 1 == ((value / 2) * 2)) {
		return true;
	}
	else {
		return false;
	}
}
bool MyInteger::isPrime() const {
	for (int i = 2; i < 100; i++) {
		if (value % i == 0 && i != value) {
			return false;
		}
	}
	return true;
}

bool MyInteger::isEven(int num) {
	if (num == ((num / 2) * 2)) {
		return true;
	}
	else {
		return false;
	}
}
bool MyInteger::isOdd(int num) {
	if (num - 1 == ((num / 2) * 2)) {
		return true;
	}
	else {
		return false;
	}
}
bool MyInteger::isPrime(int num) {
	for (int i = 2; i < 100; i++) {
		if (num % i == 0 && i != num) {
			return false;
		}
	}
	return true;
}


bool MyInteger::isEven(const MyInteger& num) {
	if (num.getValue() == ((num.getValue() / 2) * 2)) {
		return true;
	}
	else {
		return false;
	}
}
bool MyInteger::isOdd(const MyInteger& num) {
	if (num.getValue()- 1 == ((num.getValue()/ 2) * 2)) {
		return true;
	}
	else {
		return false;
	}
}
bool MyInteger::isPrime(const MyInteger& num) {
	for (int i = 2; i < 100; i++) {
		if (num.getValue() % i == 0 && i != num.getValue()) {
			return false;
		}
	}
	return true;
}

bool MyInteger::equals(int num) const {
	if (value == num) {
		return true;
	}
	else {
		return false;
	}
}
bool MyInteger::equals(const MyInteger& num) const {
	if (value == num.getValue()) {
		return true;
	}
	else {
		return false;
	}
}

/*
int MyInteger::parseInt(const std::string& str) {
	atoi(str);
	return 0;
}
*/