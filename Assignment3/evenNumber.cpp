#include "evenNumber.h"

EvenNumber::EvenNumber() {
	value = 0;
}

EvenNumber::EvenNumber(int newVal) {
	value = newVal;
}

int EvenNumber::getValue() {
	return value;
}

EvenNumber EvenNumber::getNext() {
	return EvenNumber(value + 2);
}

EvenNumber EvenNumber::getPrevious() {
	return EvenNumber(value - 2);
}