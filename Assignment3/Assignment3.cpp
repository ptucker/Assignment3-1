#include <iostream>
#include <string>
#include "fan.h"
#include "quadratic.h"
#include "evenNumber.h"
#include "myInteger.h"

void ex01();
void ex02();
void ex03();
void ex04();
std::string sort(std::string& s);
void ex05();

int main()
{
	ex05();
}

void ex01() {
	Fan fan1, fan2;

	fan1.setSpeed(3);
	fan1.setRadius(10);
	fan1.toggleState();

	fan2.setSpeed(2);
	fan2.setRadius(5);

	std::cout << "Fan 1 has speed: " << fan1.getSpeed() << " radius: " << fan1.getRadius() << " and state: " << fan1.getState() << std::endl;

	std::cout << "Fan 2 has speed: " << fan2.getSpeed() << " radius: " << fan2.getRadius() << " and state: " << fan2.getState() << std::endl;
}


void ex02() {
	int a, b, c;
	std::cout << "For the quadratic equation ax2 + bx + c = 0, plsase provide a, b, and c." << std::endl;
	std::cout << "a = ";
	std::cin >> a;
	std::cout << "b = ";
	std::cin >> b;
	std::cout << "c = ";
	std::cin >> c;
	QuadEq equation1(a, b, c);

	std::cout << "equation: " << equation1.getA() << "x2 + " << equation1.getB() << "x + " << equation1.getC() << std::endl;

	if (equation1.getDiscriminant() > 0) {
		std::cout << "Root 1: " << equation1.getRoot1() << std::endl;
		std::cout << "Root 2: " << equation1.getRoot2() << std::endl;
	}
	else if (equation1.getDiscriminant() == 0) {
		std::cout << "Single Root: " << equation1.getRoot1() << std::endl;
	}
	else if (equation1.getDiscriminant() < 0) {
		std::cout << "The equation has no real roots." << std::endl;
	}
}

void ex03() {
	EvenNumber number1(16);
	EvenNumber number0, number2;
	std::cout << "Initial value: " << number1.getValue() << std::endl;

	number0 = number1.getPrevious();
	number2 = number1.getNext();
	std::cout << "Previous even number: " << number0.getValue() << std::endl;
	std::cout << "Next even number: " << number2.getValue() << std::endl;
}

void ex04() {
	std::string input;
	std::cout << "Please enter a string: ";
	std::getline(std::cin, input);

	std::cout << std::endl << "Sorting: " << input << std::endl;
	std::cout << "Yeilds: " << sort(input);
}

std::string sort(std::string& s) {
	bool sorted = false;
	bool reachedEnd = false; 
	bool lastCheck = false; //flag to do one more check
	char copy;
	int pos;

	while (!sorted) {
		pos = 0;
		lastCheck = true;
		while (!reachedEnd) {
			//check if the next char is greater
			if (s[pos] - s[pos + 1] > 0) {
				copy = s[pos]; //swap the two characters
				s[pos] = s[pos + 1];
				s[pos + 1] = copy;

				lastCheck = false;
			}
			pos++;

			if (pos + 1 == s.length()) {
				reachedEnd = true;
			}
		}
		if (lastCheck) {
			sorted = true;
		}
		else {
			reachedEnd = false;
		}
	}
	return s;
}

void ex05() {
	MyInteger integerOP(17);
	MyInteger integerE(6);

	std::cout << integerE.isEven();
	std::cout << integerOP.isOdd();
	std::cout << integerOP.isPrime();

	std::cout << MyInteger::isEven(8);
	std::cout << MyInteger::isOdd(7);
	std::cout << MyInteger::isPrime(3);

	std::cout << integerE.equals(6);
	std::cout << integerE.equals(integerOP);

}