#pragma once
#ifndef LIST_CLASS
#define LIST_CLASS

struct List {
public:
	int value;
	List* pNext;
private:
};

class nList {
public:
	List* getNode();
	void linkList();
	void showList();
	bool delNode(int);	//ɾ�����������ڽ��
	bool insNode(int, List&);	//��������������ڽ���
	void addNode(List&);	//����ĩβ���һ�����
private:
	List* head = nullptr;
};
#endif