#include <iostream>
#include "LinkedList.h"
#include "Utilities.h"

using namespace std;

Elem* glowa = nullptr;

int main()
{
	glowa = ZbudujListe();
	PrintAll( FindMax(glowa) );
	CzekajNaKlawisz();
}