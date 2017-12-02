#pragma once
#include <iostream>
#include "LinkedList.h"

class Stack
{
public:
	Stack(){};
	virtual ~Stack();

	virtual void Push(int val) =0;
	virtual int Pop() =0;
	virtual bool IsEmpty() =0;
};

class ListStack :Stack
{
	Elem* head;
	ListStack();
	void Push(int val);
	int Pop();
	bool IsEmpty();
};

