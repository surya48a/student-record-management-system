#include "header.h"

void deleteRoll(ST **ptr)
{
	int rn;
	printf("\n\033[39;1mEnter rollno to delete data:\n");
	scanf("%d",&rn);

	ST *t=*ptr;
	ST *prev;
	while(t)
	{
		if(rn==t->rollno)
		{
			if(*ptr==t)
			{
				*ptr=t->next;
				free(t);
			}
			else
			{
				prev->next=t->next;
				free(t);
			}
			printf("\033[32;1mData deleted successfully\n\033[0m");
			return;
		}
		prev=t;
		t=t->next;
	}
	printf("\033[31;1mNo records Found\n\033[0m");
}

void deleteName(ST **ptr)
{
	char s[15];
	printf("\n\033[39;1mEnter name to delete data:\n");
	scanf(" %[^\n]",s);
	int c=0;
	ST *t;
	ST *prev;
	t=*ptr;
	while(t)
	{
		if(strcmp(s,t->name)==0)
			c++;
		t=t->next;
	}
	t=*ptr;
	if(c==0)
	{
		printf("\033[31;1mNo records found\n\033[0m");
		return;
	}
	else if(c==1)
		while(t)
		{
			if(strcmp(s,t->name)==0)
			{
				if(t==*ptr)
				{
					*ptr=(*ptr)->next;
					free(t);
				}
				else
				{
					prev->next=t->next;
					free(t);
				}
				printf("\033[32;1mData deleted successfully\n\033[0m");
				return;
			}
			prev=t;
			t=t->next;
		}
	else
	{
		printf("\n\033[32;1m%d Records found with name\nThose data is shown below:\n\033[0m",c);
		printf("\n\033[36;1m");
		while(t)
		{
			if(strcmp(s,t->name)==0)
				printf("%d %s %f\n",t->rollno,t->name,t->percentage);
			t=t->next;
		}
		printf("\n\033[39;1mNow delete data based on rollno!!\n");
		deleteRoll(ptr);
	}
}

void deleteAll(ST **ptr)
{
	if(*ptr==0)
	{
		printf("\n\033[31;1mNo records present\n\033[0m");
		return;
	}
	ST *t=*ptr;
	while(t)
	{
		*ptr=t->next;
		free(t);
		t=*ptr;
	}

	printf("\n\033[39;1mAll nodes deleted successfully\n\033[0m");
}
