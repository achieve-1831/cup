#include <stdio.h>
#include "sl_list.h"

int first_integers(int n)
{
	pslist list = slist_new();

	for (int i = 0; i < n; i++)
     slist_insert(list, i);
	
	return list;
}

int main(void)
{
	pslist = first_integers(100);
	return 0;
}
