#include "LinkedList.h"

LinkedList::LinkedList()
{
	head = nullptr;
}

void LinkedList::InsertFirst(int val)
{
	Elem* pNew = new Elem(val);
	pNew->next = head;
	head = pNew;
}

void LinkedList::InsertLast(int val)
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

void LinkedList::InsertLastDP(int val)
{
	Elem* pNew = new Elem(val);
	Elem** it = &head;
	while (*it)
	{
		it = &((*it)->next);
	}
	*it = pNew;
}

void LinkedList::PrintAll()
{
	Elem* it = head;
	cout << endl;
	while (it)
	{
		cout << it->val << endl;
		it = it->next;
	}
}

Elem* LinkedList::FindMax()
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

Elem* LinkedList::DeleteFirst()
{
	Elem* p = head;
	if (head)
	{
		head = head->next;
		p->next = nullptr;
	}
	return p;
}

Elem* LinkedList::DeleteLast()
{
	Elem* p = head;
	Elem* pPrev = nullptr;
	if (head == nullptr)
	{
		return nullptr;
	}
	if (head->next == nullptr)
	{
		p = head;
		head = nullptr;
		return p;
	}
	while (p->next)
	{
		pPrev = p;
		p = p->next;
	}
	pPrev->next = nullptr;
	return p;
}

Elem* LinkedList::FindMin()
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

Elem* LinkedList::DeleteMax()
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

Elem* LinkedList::DeleteMin()
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

Elem* LinkedList::Search(int val)
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

void LinkedList::InsertOrdered(int val)
{
	Elem* pNew = new Elem(val);
	Elem* p = head;
	if (p == nullptr)
	{
		head = pNew;
		return;
	}
	if (val < head->val)
	{
		pNew->next = head;
		head = pNew;
		return;
	}
	while (p->next && p->next->val < val)
	{
		p = p->next;
	}
	pNew->next = p->next;
	p->next = pNew;
}

void LinkedList::InsertOrderedDP(int val)
{
	Elem* pNew = new Elem(val);
	Elem** p = &head;
	while (*p && (*p)->val < val)
	{
		p = &((*p)->next);
	}
	pNew->next = *p;
	*p = pNew;
}
