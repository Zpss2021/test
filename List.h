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
	bool delNode(int);	//删除给定数所在结点
	bool insNode(int, List&);	//结点插入给定数所在结点后
	void addNode(List&);	//在链末尾添加一个结点
private:
	List* head = nullptr;
};
#endif