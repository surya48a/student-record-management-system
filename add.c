#include "header.h"

void addData(ST **ptr)
{
	ST *new;
	new=malloc(sizeof(ST));
	printf("\n\033[39;1mEnter a Student Name and Percentage:\n");
	scanf("%s%f",new->name,&new->percentage);
	if(*ptr==0)
	{
		new->rollno=1;
		new->next=*ptr;
		*ptr=new;
		printf("\033[32;1mData added successfully\n\033[0m");
		return;
	}
	sortRoll(*ptr);
	if((*ptr)->rollno != 1)
	{
		new->rollno=1;
		new->next=*ptr;
		*ptr=new;
		printf("\n\033[32;1mData Added Successfully\n\033[0m");
		return;
	}

	ST *t=*ptr;
	int r=2;

	while(t->next)
	{
		if(r!=t->next->rollno)
			break;
		t=t->next;
		r++;
	}

	if(t->next==0)
	{
		new->rollno=t->rollno+1;
		new->next=t->next;
		t->next=new;
		printf("\033[32;1mData added successfully\n\033[0m");
		return;
	}
	else
	{
		new->rollno=r;
		new->next=t->next;
		t->next=new;
		printf("\033[32;1mData added successfully\n\033[0m");
		return;
	}
}
