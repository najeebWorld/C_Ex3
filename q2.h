#ifndef q2
#define q2
#include<stdio.h>
#include<string.h>
#define TXT 1024
#define WORD 30
#include "q1.h"
#include "q3.h"
char *Atb(char *word);
int isLetter(char ch);
int isEnd(char ch);
void funcB(char *txt,char *word);
int strcmp_ptr(char *src1, char *src2);
void reverseString(char* word);
#endif