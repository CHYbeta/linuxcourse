#ifndef _CALC_H
#define _CALC_H

typedef struct Nameval Nameval;
struct Nameval
{
	int value;
	Nameval *next;	
};
Nameval *newitem(void);
Nameval *addfront(Nameval *list, Nameval *newp);
Nameval *addend(Nameval *list, Nameval *newp);
int choice(void);
void printinformation(Nameval *list);
#endif //_CALC_H
