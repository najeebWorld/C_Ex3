#include<stdio.h>
#include "q1.h"
// #include "q2.h"
// #include "q3.h"
#include<string.h>

// int isLetter(char ch);
// int isEnd(char ch);
// int sumGeAo(char *s);
// int valueOFchar(char ch);
// int sumGeAoFromTo(char *str1,char *str2);
// void funcA(char *txt,char *word);

int isLetter(char ch){

return ((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'));

}


int isEnd(char ch){

    return ((ch==' ')||(ch=='\t')||((ch=='\n')));

}

////////

int sumGeAo(char *s){

int sum=0;
int i=0;
char *t=s;

while (t[i]&&!(isEnd(t[i])))
{
    
            sum+=valueOFchar(t[i]);
    
   i++;  
}

return sum;

}

int valueOFchar(char ch){


    if ((ch>='a'&&ch<='z'))
    {
        return ch-'a'+1;
    }else if ((ch>='A'&&ch<='Z'))
    {
         return ch-'A'+1;
    }
    else{
        return 0;
    }
    
}



int sumGeAoFromTo(char *str1,char *str2)
{
int sum=0;


while (str1!=str2)
{
    sum+=valueOFchar(*str1);
    str1++;
}
    sum+=valueOFchar(*str1);


return sum;
}



void funcA(char *txt,char *word){
int flag=0;
int expected= sumGeAo(word);

char *start=txt;
char *end=txt;

while (*end!='~')
{
    
if (isLetter(*start))
{
    int current= sumGeAoFromTo(start,end); // Here will get the GEAO value from char start to char end


if (expected==current)
{
    char *s1=start;
    char *s2=end;
    flag++;
    if (flag==1)
    {

        while(s1!=s2){
        printf("%c",*s1);
        s1++;
    }
        printf("%c",*s1);
        
    }
    else{
        printf("~");
        while(s1!=s2){
        printf("%c",*s1);
        s1++;
    }
        printf("%c",*s1);
    }
    
   
  
   
    

    start++;
    end=start;
}
else if (expected>current)
{
    end++;
}
else{//expexted<current
start++;
end=start;
}

}else{
    start++;
    end=start;
}

}

}




// int main(){

// char word[WORD];
// char ch;
// size_t i;
// int k=0;
// for (i = 0; i < WORD-1; i++)
// {
//      ch=getchar();
//     if (!isEnd(ch))
//     {
//     word[i]=ch;
// }
// else{
//    break;
// }
// k++;
// }
// word[k]='\0';

// printf("\n");



// printf("\n");

// char text[TXT];
// char ch2=getchar();
// int j=0;
// while(ch2!='~'){
// text[j]=ch2;
// j++;
// ch2=getchar();
// }
// text[j]='~';

// printf("\n");

// printf("%s",text);

// printf("\n");

// ////////

// printf("Gematria Sequences: ");
// funcA(text,word);
// printf("\n");


// // printf("Atbash Sequences: ");
// // funcB(text,word);
// // printf("\n");



// // printf("Anagram Sequences: ");
// // funcC(word,text);
// // printf("\n");



// }



