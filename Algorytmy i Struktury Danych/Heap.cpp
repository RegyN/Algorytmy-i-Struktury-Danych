#include "Heap.h"

void Heap::Insert(int val)
{
	n++;
	A[n] = val;
	UpHeap(n);
}

int Heap::Max()
{
	return A[1];
}

int Heap::DeleteMax()
{
	int tmp = A[1];
	A[1] = A[n];
	n--;
	DownHeap(1, n);
	return tmp;
}

void Heap::UpHeap(int i)
{
	A[0] = INT32_MAX;
	int tmp = A[i];
	while (tmp > A[i / 2])
	{
		A[i] = A[i / 2];
		i = i / 2;
	}
	A[i] = tmp;
}

void Heap::DownHeap(int i, int m)
{
	int tmp = A[i];
	int k = 2 * i;
	while (k <= n)
	{
		if (k + 1 <= n)
			if (A[k + 1] > A[k])
				k++;
		if (A[k] > tmp)
		{
			A[i] = A[k];
			i = k;
			k = 2 * i;
		}
		else
			break;
	}
	A[i] = tmp;
}

int Heap::Search(int val)
{
	for(int i = 1; i<=n; i++)
	{
		if (A[i] == val)
			return i;
	}
	return -1;
}

void Heap::PrintAll()
{
	for(int i = 1; i<=n; i++)
	{
		std::cout << A[i] << std::endl;
	}
}

Heap Heap::CreateHeapDown(int data[], int size)
{
	Heap kopiec;
	kopiec.A[0] = INT32_MAX;
	for (int i = 0; i < size; i++)
	{
		kopiec.Insert(data[i]);
	}
	return kopiec;
}

Heap Heap::CreateHeapUp(int data[], int size)
{
	Heap kopiec;
	kopiec.A[0] = INT32_MAX;
	kopiec.n = size;
	for (int i = 1; i < size+1; i++)
	{
		kopiec.A[i] = data[i - 1];
	}
	for (int i = kopiec.n / 2; i > 0; i--)
	{
		kopiec.DownHeap(i, kopiec.n);
	}
	return kopiec;
}
