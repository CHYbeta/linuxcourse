#include "include/function.h"
#include <stdio.h>
#include <stdlib.h>

Nameval *newitem(void){
	Nameval *newp;
	int value;
	printf("Please input the value of new item: ");
	scanf("%d",&value);
	newp = (Nameval *)malloc(sizeof(Nameval));
	newp->value = value;
	newp->next = NULL;
	return newp;
}

Nameval *addfront(Nameval *listp, Nameval *newp){
	newp->next = listp;
	return newp;
}
Nameval *addend(Nameval *listp, Nameval *newp){
	Nameval *p;
	if (listp == NULL){
		return newp;
	}	
	for (p = listp; p->next != NULL; p = p->next)
		;
	p->next = newp;
	return listp;
}

void printinformation(Nameval *list){
	int id = 0;
	while (list){
		id++;
		printf("%d:\n value = %d\n", id, list->value);
		list = list->next;
	}
}

int choice(void){
	int temp;
	printf("0.exit the system.\n1.add a item to front of list\n2.add a item to end of list\n3.print all informations of list\nyour choice is : ");
	scanf("%d", &temp);
	return temp;
}