#pragma once
#include <iostream>
#include "LinkedList.h"

using namespace std;

void CzekajNaKlawisz()
{
	int a;
	cin >> a;
}

Elem* ZbudujListe()
{
	Elem* lista = nullptr;
	InsertFirst(16, lista);
	InsertFirst(2, lista);
	InsertFirst(6, lista);
	InsertFirst(3, lista);
	InsertFirst(15, lista);
	InsertFirst(31, lista);
	InsertFirst(1, lista);
	return lista;
}

Elem* ZbudujSortowanaListe()
{
	Elem* lista = nullptr;
	InsertLast(1, lista);
	InsertLast(4, lista);
	InsertLast(11, lista);
	InsertLast(17, lista);
	InsertLast(35, lista);
	InsertLast(54, lista);
	InsertLast(131, lista);
	return lista;
}