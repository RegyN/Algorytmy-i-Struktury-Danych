#include "Stack.h"


ListStack::ListStack()
{
	head = nullptr;
}

bool ListStack::IsEmpty()
{
	if (head == nullptr)
	{
		return true;
	}
	return false;
}

int ListStack::Pop()
{
	if (IsEmpty())
	{
		throw(new exception("Stos jest pusty"));
	}
	Elem* p = head;
	head = head->next;
	p->next = nullptr;
	return p->val;
}

void ListStack::Push(int val)
{
	Elem* pNew = new Elem(val);
	if (IsEmpty())
	{
		head = pNew;
		return;
	}

}
