#include "Math.h"
#include <iostream>

Number Math::n(0);

void Math::setNumber(Number a) {
	n.setNumber(a.getNumber());
}

void Math::setNumber(Vector m){
	n.setNumber(m.getNumber());
}

bool Math::is2multiple() {
	if (n.getNumber() % 2 == 0)
		return true;
	else
		return false;
}

bool Math::is2multiple(Number a) {
	if (a.getNumber() % 2 == 0)
		return true;
	else
		return false;
}

void Math::printNumber(){
	std::cout << Math::n.getNumber();
}
