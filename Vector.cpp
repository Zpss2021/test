#include "Vector.h"

Vector::Vector() {
	Number::setNumber(0);
	this->direction = 0;
}

Vector::Vector(int n, double direction):Number(n) {
	this->direction = direction;
}

Vector::Vector(Number n, double direction) {
//	Number::setNumber(n.getNumber());
	this->num = n.getNumber();
	this->direction = direction;
}

void Vector::setNumber(Number n, double direction) {
//	Number::setNumber(n.getNumber());
	this->num = n.getNumber();
	this->direction = direction;
}
