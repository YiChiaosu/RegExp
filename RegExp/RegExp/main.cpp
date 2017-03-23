#include <stdio.h>
#include <stdlib.h>
#include "Hash.h"

simplelist *Idtable;
int main()
{
	addlist(&Idtable, "Hello");
	addlist(&Idtable, "World");
	addlist(&Idtable, "This");
	print(Idtable);
	system("PAUSE");
	return 0;
}