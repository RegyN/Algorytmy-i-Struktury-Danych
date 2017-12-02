#pragma once
# include <iostream>
using namespace std;

struct Elem
{
	int val;
	Elem* next;
	Elem(int v)
	{
		val = v;
		next = nullptr;
	}
};

class LinkedList
{
public:
	Elem* head;

	// Funkcje oznaczone DP wykorzystuj¹ podwójny wskaŸnik (Elem** )

	LinkedList();
	// Podstawowe funkcji do pracy na listach jednokierunkowych
	void InsertFirst(int val);
	void InsertLast(int val);
	void InsertLastDP(int val);

	void PrintAll();

	Elem* Search(int val);
	Elem* FindMax();
	Elem* FindMin();

	Elem* DeleteFirst();
	Elem* DeleteLast();
	Elem* DeleteMax();
	Elem* DeleteMin();

	// Te funkcje do porawnego dzia³ania potrzebuj¹ listy posortowanej rosn¹co
	void InsertOrdered(int val);
	void InsertOrderedDP(int val);
};