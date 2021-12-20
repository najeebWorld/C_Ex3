
#include"q3.h"

// int isConatin(char *word,char letter);
// void funcC(char *word,char *str);
// char* subString(char *word,int j);
// char* remChar(char* str, int start_pos,char ch);
// int isEnd(char ch);


int isContain(char *word,char letter){
char *p=word;
while (*p)
{
    if (*p==letter)
    {
        return 1;
    }
    else{
        p++;
    }
    
}
return 0;

}

// int isEnd(char ch){

//     return ((ch==' ')||(ch=='\t')||((ch=='\n')));

// }


char* remChar(char* str, int start_pos,char ch){
    int i=0;
    int j=0;
    int len=strlen(str);
    char newStr[len];
char *p=str;
    while (*p)
    {
        if ((i==start_pos)&&((*p)==ch))
        {
            p++;
             i++;
        }else{

         newStr[j++]=*p;
         p++;
         
        }
        
    }
    newStr[j]= '\0';

str=newStr;
 return   str;
  
}







void funcC(char *word,char *str){

char *p2=str;
int flag=0;

int len1 =strlen(word); 
int len2=strlen(str);

int counter=0;

// p1 pointer to the fisrt element in the word
// p2 pointer to the fisrt element in the txt
char *start;
char *end;
char *org=word;
int j=0;
for (char *i = p2; i <(p2+len2); i++)
{
    j=-1;  // here the problem!!
     start=i;
   while ((counter<len1)&&isContain(word,*i)) // while the letter in the txt is not in the word then continue to the next letter
   {
       
       if ((*i)!=' ')
       {
        j++;
           counter++;
       }
       
       else{
counter=counter+0;
       }
        
word = remChar(word,j,*i);

i++;
j=-1;
       
   }

word=org;

if (counter==len1)
{
    end=start+counter;
    flag++;
    if (flag==1)
    {
        for (char *k = start; k<end; k++)
    {
        printf("%c",*k);

    }
    
    }
    else{
        printf("~");
         for (char *k = start; k<end; k++)
    {
        printf("%c",*k);

    }
    }
    
   
    
}

counter=0;



       
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



// ////////



// printf("Anagram Sequences: ");
// funcC(word,text);
// printf("\n");

// }






