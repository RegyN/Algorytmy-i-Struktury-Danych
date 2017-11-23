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

// Standardowe wersje podstawowych funkcji do pracy na listach jednokierunkowych
void InsertFirst(int val, Elem* &head);

void InsertLast(int val, Elem* &head);

void PrintAll(Elem* head);

Elem* DeleteFirst(Elem* &head);

Elem* FindMax(Elem* head);

Elem* FindMin(Elem* head);

Elem* DeleteMax(Elem* &head);

Elem* DeleteMin(Elem* &head);

Elem* Search(int val, Elem* head);

// Wersje kilku spo�r�d podstawowych funkcji, wykorzystuj�ce podw�jny wska�nik (Elem** )
void InsertLastDP(int val, Elem* &head);

// TODO: InsertIntoOrderedList w wersji zwyk�ej i DP, mo�e jeszcze par� funkcji w wersji DP.