#pragma once
#include "Number.h"
#ifndef VECTOR
#define VECTOR

class Vector:public Number {
public:
	Vector();
	Vector(int, double);
	Vector(Number, double);
	void setNumber(Number, double);
	friend class Math;
private:
	double direction;
};

#endif