#include "header.h"


void modifyData(ST *ptr)
{
	int choice,rn;
	float f;
	char s[15];
	printf("\n\033[39;1m");
	while(1)
	{
l:	
		printf("\033[39;1m1) Search by rollno \n2) Search by name\n3) Search by percentage\n");
		printf("Enter your choice:\n");	
		scanf(" %d",&choice);
		if(choice==1 || choice==2 || choice==3)
			break;
	}
	ST *t=ptr;
	switch(choice)
	{
		case 1:
			printf("\nEnter a rollno to search:\n");     
			scanf("%d",&rn);
			while(t)
			{
				if(t->rollno == rn)
					break;
				if(t->next != 0)			      
					t=t->next;
			}
			if(t->rollno == rn)
			{
				printf("\n\033[32;1mRecord Found\n\033[0m\n");
				printf("\033[36;1m%d %s %f\n\033[0m",t->rollno,t->name,t->percentage);
				printf("\n\033[39;1m1) Modify Name\n2) Modify Percentage\n\nEnter your choice:\n");
				scanf("%d",&choice);
				printf("\n");
				if(choice==1)
				{
					printf("Enter new name:\n");
					scanf("%s",t->name);
					printf("\033[32;1mSuccessfully name modified\n\033[0m");
					return;
				}
				else if(choice==2)
				{
					printf("Enter new percentage:\n");
					scanf("%f",&t->percentage);
					printf("\033[32;1mSuccessfully percentage modified\n\033[0m");
					return;
				}
			}
			else
			{
				printf("\033[31;1mNot found this rollno\n\033[0m");
				printf("\033[32;1mPlease Try again!!\n\033[0m");
				goto l;
			}
			break;
		case 2:
			t=ptr;
			printf("\nEnter rollno and name to search:\n");
			scanf("%d%s",&rn,s);
			while(t)
			{
				if(strcmp(s,t->name)==0 && rn==t->rollno)
				{
					printf("\n\033[32[1mRecord Found\n\033[0m\n");
					printf("\033[36;1m%d %s %f\n\033[0m",t->rollno,t->name,t->percentage);
					printf("\n\033[39;1m[1) Modify Name\n2) Modify Percentage\n\nEnter your choice:\n");
					scanf("%d",&choice);
					if(choice==1)
					{
						printf("\nEnter new name:\n");
						scanf("%s",t->name);
						printf("\033[32;1mSuccessfully name modified\n\033[0m");
						return;
					}
					else if(choice==2)
					{
						printf("\nEnter new percentage:\n");
						scanf("%f",&t->percentage);
						printf("\033[32;1mSuccessfully percentage modified\n\033[0m");
						return;
					}
				}
				t=t->next;
			}
			break;
		case 3:
			t=ptr;
			printf("\nEnter rollno and name to search:\n");
			scanf("%d%f",&rn,&f);
			while(t)
			{
				if(t->percentage==f && rn==t->rollno)
				{
					printf("\033[32[1mRecord Found\n\033[0m");
					printf("\n\033[36;1m%d %s %f\n\033[0m",t->rollno,t->name,t->percentage);
					printf("\n\033[39;1m1) Modify Name\n2) Modify Percentage\n\nEnter your choice:\n");
					scanf("%d",&choice);
					printf("\n");
					if(choice==1)
					{
						printf("Enter new name:\n");
						scanf("%s",t->name);
						printf("\033[32;1mSuccessfully name modified\n\033[0m");
						return;
					}
					else if(choice==2)
					{
						printf("Enter new percentage:\n");
						scanf("%f",&t->percentage);
						printf("\033[32;1mSuccessfully percentage modified\n\033[0m");
						return;
					}
				}
				t=t->next;
			}
			break;
		default: printf("\033[0m\033[31;1mUnknown option Please Try again!!\n\033[0m");
			 goto l;
	}
}
