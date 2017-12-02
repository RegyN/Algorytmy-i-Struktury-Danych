#include <iostream>
#include "LinkedList.h"
#include "BinaryTree.h"
#include "Heap.h"
#include "Utilities.h"

using namespace std;

LinkedList lista;
BinaryTree drzewo;
Heap kopiec;

int main()
{
	int a[10];
	for (int i = 0; i < 10; i++)
	{
		a[i] = i;
	}
	kopiec = Heap::CreateHeapUp(a, 10);
	kopiec.PrintAll();
	NL();
	kopiec = Heap::CreateHeapDown(a, 10);
	kopiec.PrintAll();
	NL();
	CzekajNaKlawisz();
}