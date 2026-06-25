#ifndef _HEADER_H
#define _HEADER_H


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>

typedef struct st
{
int rollno;
char name[20];
float percentage;
struct st *next;
}ST;

     
void addData(ST **);
void deleteName(ST **);
void deleteRoll(ST **);
void showData(ST *);
void modifyData(ST *);
void saveFile(ST *);
void deleteAll(ST **);
void reverseList(ST *);
void sortName(ST *);
void sortPercentage(ST *);
void sortRoll(ST *);     


#endif
