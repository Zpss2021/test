#include <iostream>
using namespace std;

struct List {
	int value;
	List* pNext;
};

List* head;	//链首指针

List* getNode();
void linkList();
void showList();
bool delNode(int);	//删除给定数所在结点
bool insNode(int, List&);	//结点插入给定数所在结点后
void addNode(List&);	//在链末尾添加一个结点

int main(void) {
	int m, n;
	cout << "Please input value, end by -1:";
	linkList();
	showList();
	cout << endl << "Please Enter one number to delete:";
	cin >> n;
	if (delNode(n)) {
		cout << "Delete Success" << endl;
		showList();
	}
	else
		cout << "Number not exist" << endl;
	cout << endl << "Please Enter one number to add and which number its behind:";
	cin >> m >> n;
	List add = { m };
	if (insNode(n, add)) {
		cout << "Insert Success" << endl;
		showList();
	}
	else
		cout << "Number not exist" << endl;
	cout << endl << "Please input one number to add:";
	cin >> m;
	add = { m };
	addNode(add);
	showList();
	return 0;
}

List* getNode() {
	int n;
	cin >> n;
	if (n < 0)
		return nullptr;
	else {
		List* p = new List;
		p->value = n;
		p->pNext = nullptr;
		return p;
	}
}

void linkList() {
	if (head = getNode()) {
		List* p0 = head, * p1 = nullptr;
		do {
			p1 = getNode();
			p0->pNext = p1;
			p0 = p1;
		} while (p1!=nullptr);
	}
}

void showList() {
	for (List* p = head; p != nullptr; p = p->pNext)
		cout << p->value << ' ';
}

bool delNode(int num) {
	if (head != nullptr) //判断是否链空
	{
		if (head->value == num)	//判断是否要删除的结点在链首
		{
			List* p = head;
			head = head->pNext;
			delete p;	//释放已删除结点空间
			return true;
		}
		else 
		{
			for (List* p1 = head, *p0 = head; p1 != nullptr; p0 = p1, p1 = p1->pNext)
				if (p1->value == num) {
					p0->pNext = p1->pNext;	//前后结点相链，跨过待删结点
					delete p1;	//释放已删除结点空间
					return true;
				}
		}
	}
	return false;
}

bool insNode(int num, List& p) {
	List* pp = new List;
	*pp = p;	//复制成堆结点
	if (head != nullptr) //判断是否链空
	{
		for (List* p1 = head, *p0 = head; p1 != nullptr; p0 = p1, p1 = p1->pNext)
				if (p0->value == num) {
					pp->pNext = p0->pNext;
					p0->pNext = pp;
					return true;
				}
	}
	return false;
}

void addNode(List& p) {
	List* pp = new List, * p0 = new List;
	*pp = p;
	p0 = head;
	if (head->pNext == nullptr)
		head->pNext = pp;
	else {
		while (p0->pNext != nullptr)
			p0 = p0->pNext;
		p0->pNext = pp;
	}
	pp->pNext = nullptr;
}
