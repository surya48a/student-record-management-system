#include "header.h"


void saveFile(ST *ptr)
{
	if(ptr==0)
	{
		printf("\n\033[31;1mNo records present\n\033[0m");
		return;
	}
	FILE *fp=fopen("student.data","w");
	fprintf(fp,"%s\n\n","       STUDENTS DATA");

	while(ptr)
	{
		fprintf(fp,"\n%d %s %f\n",ptr->rollno,ptr->name,ptr->percentage);
		ptr=ptr->next;
	}
	printf("\n\033[32;1mRecords saved successfully\n\033[0m");
}
