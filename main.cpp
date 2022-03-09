#include "Number.h"
#include "Vector.h"
#include "Math.h"
#include <iostream>
using namespace std;

void func(Math);
void func(Number);

int main(void) {
	int tmp;
	cout << "Please input a number:"; 
	cin >> tmp;

	Number n;
	n.setNumber(tmp);

	Vector a;
	a.setNumber(n, 0.5f);

	Math m;
	m.setNumber(a);

	func(m);
	return 0;
}

void func(Math m) {
	if (m.is2multiple())
		cout << "is 2's multiple" << endl;
	else
		cout << "is not 2's multiple" << endl;
}

void func(Number m) {
	Math n(m);
	if (n.is2multiple())
		cout << "is 2's multiple" << endl;
	else
		cout << "is not 2's multiple" << endl;
}