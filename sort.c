#include "header.h"

void sortName(ST *ptr)
{
	if(ptr==0)
	{
		printf("\n\033[31;1mNo records present\n\033[0m");
		return;
	}

	ST *p1=ptr,*p2,t;
	int c=0;
	while(p1)
	{
		c++;
		p1=p1->next;
	}
	p1=ptr;
	int i,j;

	for(i=0;i<c-1;i++)
	{
		p2=p1->next;
		for(j=0;j<c-1-i;j++)
		{
			if(strcmp(p1->name,p2->name)>0)
			{
				t.rollno=p1->rollno;
				strcpy(t.name,p1->name);
				t.percentage=p1->percentage;

				p1->rollno=p2->rollno;
				strcpy(p1->name,p2->name);
				p1->percentage=p2->percentage;

				p2->rollno=t.rollno;
				strcpy(p2->name,t.name);
				p2->percentage=t.percentage;
			}
			p2=p2->next;
		}
		p1=p1->next;
	}

	printf("\033[32;1mData sorted successfully\n\033[0m");
}


void sortPercentage(ST *ptr)
{
	if(ptr==0)
	{
		printf("\n\033[31;1mNo records present\n\033[0m");
		return;
	}
	ST *p1=ptr,*p2,t;
	int i,j;

	int c=0;
	while(p1)
	{
		c++;
		p1=p1->next;
	}
	p1=ptr;

	for(i=0;i<c-1;i++)
	{
		p2=p1->next;
		for(j=0;j<c-1-i;j++)
		{
			if(p1->percentage < p2->percentage)
			{
				t.rollno=p1->rollno;
				strcpy(t.name,p1->name);
				t.percentage=p1->percentage;

				p1->rollno=p2->rollno;
				strcpy(p1->name,p2->name);
				p1->percentage=p2->percentage;

				p2->rollno=t.rollno;
				strcpy(p2->name,t.name);
				p2->percentage=t.percentage;
			}
			p2=p2->next;
		}
		p1=p1->next;
	}

	printf("\n\033[32;1mData sorted successfully\n\033[0m");
}

void reverseList(ST *ptr)
{
	if(ptr==0)
	{
		printf("\n\033[31;1mNo records present\n\033[0m");
		return;
	}

	ST *p1=ptr,*p2,t;
	int c=0;
	while(p1)
	{
		c++;
		p1=p1->next;
	}
	int i,j;
	p1=ptr;
	for(i=0;i<c-1;i++)
	{
		p2=p1->next;
		for(j=0;j<c-1-i;j++)
		{
			t.rollno=p1->rollno;
			strcpy(t.name,p1->name);
			t.percentage=p1->percentage;

			p1->rollno=p2->rollno;
			strcpy(p1->name,p2->name);
			p1->percentage=p2->percentage;

			p2->rollno=t.rollno;
			strcpy(p2->name,t.name);
			p2->percentage=t.percentage;

			p2=p2->next;
		}
		p1=p1->next;
	}
	printf("\n\033[32;1mData reversed successfully\n\033[0m");
}


void sortRoll(ST *ptr)
{
	if(ptr==0)
	{
		printf("\n\033[31;1mNo Records Present\n\033[0m");
		return;
	}

	ST *p1,*p2,t;
	p1=ptr;
	int c=0;

	while(p1)
	{
		c++;
		p1=p1->next;
	}

	int i,j;
	p1=ptr;

	for(i=0;i<c-1;i++)
	{
		p2=p1->next;
		for(j=0;j<c-1-i;j++)
		{
			if(p1->rollno > p2->rollno)
			{
				t.rollno=p1->rollno;
				strcpy(t.name,p1->name);
				t.percentage=p1->percentage;

				p1->rollno=p2->rollno;
				strcpy(p1->name,p2->name);
				p1->percentage=p2->percentage;

				p2->rollno=t.rollno;
				strcpy(p2->name,t.name);
				p2->percentage=t.percentage;

			}
			p2=p2->next;
		}
		p1=p1->next;
	}

}
