#pragma once
#include <iostream>
#include "LinkedList.h"
#include "BinaryTree.h"

using namespace std;
using namespace DrzewoBinarne;

void CzekajNaKlawisz()
{
	int a;
	cin >> a;
}

void NL()
{
	cout << endl;
}

BinaryTree ZbudujDrzewo()
{
	BinaryTree drzewo;
	drzewo.root = new Node(10);
	drzewo.root->left = new Node(6);
	drzewo.root->right = new Node(18);
	drzewo.root->left->left = new Node(3);
	drzewo.root->left->right = new Node(7);
	drzewo.root->right->left = new Node(11);
	return drzewo;
}

LinkedList ZbudujListe()
{
	LinkedList lista;
	lista.InsertFirst(16);
	lista.InsertFirst(2);
	lista.InsertFirst(6);
	lista.InsertFirst(3);
	lista.InsertFirst(15);
	lista.InsertFirst(31);
	lista.InsertFirst(1);
	return lista;
}

LinkedList ZbudujSortowanaListe()
{
	LinkedList lista;
	lista.InsertLast(1);
	lista.InsertLast(4);
	lista.InsertLast(11);
	lista.InsertLast(17);
	lista.InsertLast(35);
	lista.InsertLast(54);
	lista.InsertLast(131);
	return lista;
}