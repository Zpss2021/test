#pragma once
#include "Number.h"
#include "Vector.h"

#ifndef MATH
#define MATH
class Math {
public:
	Math() { n.setNumber(0); }
	Math(Number number) { n.setNumber(number.getNumber()); }
	Math(Vector vec) { n.setNumber(vec.getNumber()); }
	Math(const Math& t) { n.setNumber(t.n.getNumber()); }
	void setNumber(Number);
	void setNumber(Vector);
	bool is2multiple();
	bool is2multiple(Number);
	static void printNumber();
private:
	static Number n;
};
#endif
