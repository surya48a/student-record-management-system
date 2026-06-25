#include "header.h"
void main()
{
	ST *hptr=0;
	char op;

	while(1)
	{
		printf("\033[39;1m________________________________________________________________\n");
		printf("|                                                              |\n");
		printf("|           ******* STUDENT RECORD MENU *******                |\n");
		printf("|______________________________________________________________|\n");
		printf("|                                                              |\n");
		printf("| a/A : Add new record                                         |\n");
		printf("| d/D : Delete a record                                        |\n");
		printf("| s/S : Show the list                                          |\n");
		printf("| m/M : Modify a record                                        |\n");
		printf("| v/V : Save                                                   |\n");
		printf("| e/E : Exit                                                   |\n");
		printf("| t/T : Sort the list                                          |\n");
		printf("| l/L : Delete all the records                                 |\n");
		printf("| r/R : Reverse the list                                       |\n");
		printf("|                                                              |\n");
		printf("|______________________________________________________________|\n");
		printf("Enter your choice:");
		scanf(" %c",&op);
		printf("\033[0m");
		switch(op)
		{
			case 'a':case 'A':addData(&hptr); break;
			case 'd':case 'D':
					  while(1)
					  {
						  printf("\n\033[39;1mR/r : Based on rollno to delete data\n");
						  printf("\nN/n : Based on name to delete data\n");
						  scanf(" %c",&op);
						  if(op=='R' || op=='r')
						  {
							  deleteRoll(&hptr);
							  break;
						  }
						  else if(op=='N' || op=='n')
						  {
							  deleteName(&hptr);
							  break;
						  }
						  else
							  printf("\n\033[31;1mWrong option Try again\n\033[0m");
					  }
					  break;
			case 's':case 'S':showData(hptr); break;
			case 'm':case 'M':modifyData(hptr); break;
			case 'v':case 'V':saveFile(hptr); break;
			case 'e':case 'E':
					  while(1)
					  {
						  printf("\n\033[39;1m\nEnter your choice:\n");
						  printf("S/s : Save and exit\n");
						  printf("E/e : Exit without saving\n");
						  scanf(" %c",&op);
						  printf("\033[0m");
						  if(op=='S' || op=='s')
						  {
							  saveFile(hptr);
							  printf("\n\033[32;1mThank you Have a nice day !!\n\n\033[0m");
							  exit(0);
						  }
						  else if(op=='E' || op=='e')
						  {
							  printf("\n\033[32;1mThank you Have a nice day !!\n\n\033[0m");
							  exit(0);
						  }
						  else
							  printf("\n\033[31;1mWrong option Try again!\n\033[0m");
					  }
			case 't':case 'T':
					  while(1)
					  {
						  printf("\n\033[39;1mN/n : Sort with Name\n");
						  printf("P/p : Sort with Percentage\n");
						  printf("Enter your choice:\n");
						  scanf(" %c",&op);
						  if(op=='N' || op=='n')
						  {
							  sortName(hptr);
							  break;
						  }
						  else if(op=='P' || op=='p')
						  {
							  sortPercentage(hptr);
							  break;
						  }
						  else
							  printf("\033[31;1mWrong option Try again !!\n\033[0m");
					  }
					  break;
			case 'l':case 'L':deleteAll(&hptr); break;
			case 'r':case 'R':reverseList(hptr); break;
			default:printf("\n\033[31;1mWrong Option Please Try again !!\n\033[0m");
		}
	}
}

