#include "header.h"


void showData(ST *ptr)
{
	if(ptr==0)
	{
		printf("\033[31;1m____________________________________________________________\n");
		printf("|                                                           |\n");
		printf("|                NO RECORDS PRESENT                         |\n");
		printf("|                                                           |\n");
		printf("|___________________________________________________________|\n\033[0m");
		return;
	}
	printf("\n\033[32;1m               STUDENT RECORDS\n\033[0m");
        printf("\033[39;1m             -----------------\n\n\033[0m");
	printf("\033[36;1m");
printf("____________________________________________________\n");
printf("|              |                   |                |\n"); 
printf("|    %-9s |      %-11s  |    %-11s |\n","ROLLNO","NAME","MARKS");    
printf("|______________|___________________|________________|\n");
	while(ptr)
	{
printf("|              |                   |                |\n"); 
printf("|       %-5d  |     %-13s |     %-10g |\n",ptr->rollno,ptr->name,ptr->percentage);
printf("|______________|___________________|________________|\n");
		ptr=ptr->next;
	}
//printf("----------------------------------------------------\n");
	printf("\033[0m");

}
