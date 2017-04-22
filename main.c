#include <stdio.h>
#include "include/function.h"

int main(void)
{
	Nameval *list = NULL;
	Nameval *item;
	int flag;
	flag = choice();
	while (flag){
		if (flag == 1){
			item = newitem();
			list = addfront(list,item);
		}
		else if (flag == 2) 
		{
			item = newitem();
			list = addend(list,item);
		}
		else if (flag == 3)
		{
			printinformation(list);
		}
		flag = choice();
	}
	return 0;
}