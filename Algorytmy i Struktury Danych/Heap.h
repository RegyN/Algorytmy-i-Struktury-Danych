#pragma once
#include <iostream>

// Kopiec zaimplementowany jako tablica.
class Heap
{
public:
	int A[150];
	int maxItem = 150;
	int n = 0;

	void Insert(int val);
	int Max();
	int DeleteMax();
	void UpHeap(int i);
	void DownHeap(int i, int n);
	int Search(int val);
	void PrintAll();

	static Heap CreateHeapDown(int data[], int size);
	static Heap CreateHeapUp(int data[], int size);
};

