#include "Number.h"

Number::Number() {
	this->num = 0;
}

Number::Number(int n) {
	this->num = n;
}

int Number::getNumber() {
	return this->num;
}

void Number::setNumber(int n) {
	this->num = n;
}