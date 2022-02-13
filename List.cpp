#include "List.h"
#include <iostream>

List* nList::getNode() {
	int n;
	std::cin >> n;
	if (n < 0)
		return nullptr;
	else {
		List* p = new List;
		p->value = n;
		p->pNext = nullptr;
		return p;
	}
}

void nList::linkList() {
	if (head = getNode()) {
		List* p0 = head, * p1 = nullptr;
		do {
			p1 = getNode();
			p0->pNext = p1;
			p0 = p1;
		} while (p1 != nullptr);
	}
}

void nList::showList(){
	for (List* p = head; p != nullptr; p = p->pNext)
		std::cout << p->value << ' ';
}

bool nList::delNode(int num) {
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

bool nList::insNode(int num, List& p) {
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


void nList::addNode(List& p) {
	List* pp = new List, * p0 = new List;
	*pp = p;
	p0 = head;
	if (head == nullptr)
		head = pp;
	else {
		while (p0->pNext != nullptr)
			p0 = p0->pNext;
		p0->pNext = pp;
	}
	pp->pNext = nullptr;
}
