#ifndef evenNumber_h
#define evenNumber_h

class EvenNumber {
public:
	EvenNumber();
	EvenNumber(int);

	int getValue();
	EvenNumber getNext();
	EvenNumber getPrevious();
private:
	int value;
};

#endif