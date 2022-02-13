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
	if (head != nullptr) //�ж��Ƿ�����
	{
		if (head->value == num)	//�ж��Ƿ�Ҫɾ���Ľ��������
		{
			List* p = head;
			head = head->pNext;
			delete p;	//�ͷ���ɾ�����ռ�
			return true;
		}
		else
		{
			for (List* p1 = head, *p0 = head; p1 != nullptr; p0 = p1, p1 = p1->pNext)
				if (p1->value == num) {
					p0->pNext = p1->pNext;	//ǰ���������������ɾ���
					delete p1;	//�ͷ���ɾ�����ռ�
					return true;
				}
		}
	}
	return false;
}

bool nList::insNode(int num, List& p) {
	List* pp = new List;
	*pp = p;	//���Ƴɶѽ��
	if (head != nullptr) //�ж��Ƿ�����
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
