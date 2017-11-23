#include "LinkedList.h"


void InsertFirst(int val, Elem* &head)
{
	Elem* pNew = new Elem(val);
	pNew->next = head;
	head = pNew;
}

void InsertLast(int val, Elem* &head)
{
	Elem* pNew = new Elem(val);
	if (!head)
	{
		head = pNew;
		return;
	}
	Elem* it = head;
	while (it->next)
	{
		it = it->next;
	}
	it->next = pNew;
}

void PrintAll(Elem* head)
{
	Elem* it = head;
	while (it)
	{
		cout << it->val << endl;
		it = it->next;
	}
}

Elem* DeleteFirst(Elem* &head)
{
	Elem* p = head;
	if (head)
	{
		head = head->next;
		p->next = nullptr;
	}
	return p;
}

Elem* FindMax(Elem* head)
{
	if (!head)
		return nullptr;

	Elem* p = head;
	Elem* pMax = head;
	while (p)
	{
		if (p->val > pMax->val)
		{
			pMax = p;
		}
		p = p->next;
	}
	pMax->next = nullptr;
	return pMax;
}

Elem* FindMin(Elem* head)
{
	if (!head)
		return nullptr;

	Elem* p = head;
	Elem* pMin = head;
	while (p)
	{
		if (p->val < pMin->val)
		{
			pMin = p;
		}
		p = p->next;
	}
	pMin->next = nullptr;
	return pMin;
}

Elem* DeleteMax(Elem* &head)
{
	Elem* p = head;
	Elem* pPrev = nullptr;
	Elem* pMax = head;
	Elem* pMaxPrev = nullptr;

	if (!head)
		return nullptr;

	while (p)
	{
		if (p->val > pMax->val)
		{
			pMax = p;
			pMaxPrev = pMax;
		}
		pPrev = p;
		p = p->next;
	}

	if (pMaxPrev == nullptr)
	{
		head = head->next;
	}
	else
	{
		pMaxPrev->next = pMax->next;
	}
	pMax->next = nullptr;
	return pMax;
}

Elem* DeleteMin(Elem* &head)
{
	Elem* p = head;
	Elem* pPrev = nullptr;
	Elem* pMin = head;
	Elem* pMinPrev = nullptr;

	if (!head)
		return nullptr;

	while (p)
	{
		if (p->val < pMin->val)
		{
			pMin = p;
			pMinPrev = pMin;
		}
		pPrev = p;
		p = p->next;
	}

	if (pMinPrev == nullptr)
	{
		head = head->next;
	}
	else
	{
		pMinPrev->next = pMin->next;
	}
	pMin->next = nullptr;
	return pMin;
}

Elem* Search(int val, Elem* head)
{
	Elem* p = head;
	while (p)
	{
		if (p->val == val)
		{
			return p;
		}
		p = p->next;
	}
	return nullptr;
}

void InsertLastDP(int val, Elem* &head)
{
	Elem* pNew = new Elem(val);
	Elem** it = &head;
	while (*it)
	{
		it = &((*it)->next);
	}
	*it = pNew;
}
