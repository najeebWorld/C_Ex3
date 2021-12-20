#ifndef q3
#define q3
#include<stdio.h>
#include<string.h>
#include "q1.h"
#include "q2.h"
#define TXT 1024
#define WORD 30
#define N 26
int isEnd(char ch);
int isContain(char *word,char letter);
void funcC(char *word,char *str);
char* subString(char *word,int j);
char* remChar(char* str, int start_pos,char ch);
#endif
