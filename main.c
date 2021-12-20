#include "q1.h"
#include "q2.h"
#include "q3.h"
int main(){

char word[WORD];
char ch;
size_t i;
int k=0;
for (i = 0; i < WORD-1; i++)
{
     ch=getchar();
    if (!isEnd(ch))
    {
    word[i]=ch;
}
else{
   break;
}
k++;
}
word[k]='\0';


char text[TXT];
char ch2=getchar();
int j=0;
while(ch2!='~'){
text[j]=ch2;
j++;
ch2=getchar();
}
text[j]='~';



////////

printf("Gematria Sequences: ");
funcA(text,word);
printf("\n");


printf("Atbash Sequences: ");
funcB(text,word);
printf("\n");



printf("Anagram Sequences: ");
funcC(word,text);


}