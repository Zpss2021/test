#include <iostream>
#include "List.h"
using namespace std;

int main(void) {
	nList nodeList;
	int m, n;
	cout << "Please input value, end by -1:";
	nodeList.linkList();
	nodeList.showList();
	cout << endl << "Please Enter one number to delete:";
	cin >> n;
	if (nodeList.delNode(n)) {
		cout << "Delete Success" << endl;
		nodeList.showList();
	}
	else
		cout << "Number not exist" << endl;
	cout << endl << "Please Enter one number to add and which number its behind:";
	cin >> m >> n;
	List add = { m };
	if (nodeList.insNode(n, add)) {
		cout << "Insert Success" << endl;
		nodeList.showList();
	}
	else
		cout << "Number not exist" << endl;
	cout << endl << "Please input one number to add:";
	cin >> m;
	add = { m };
	nodeList.addNode(add);
	nodeList.showList();
	return 0;
}