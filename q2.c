#include<string.h>
#include<stdio.h>
#include"q2.h"
// char *Atb(char *word);
// int isLetter(char ch);
// int isEnd(char ch);
// void funcB(char *txt,char *word);
// int strcmp_ptr(char *src1, char *src2);
// void reverseString(char* word);




int strcmp_ptr(char *src1, char *src2)
{
  
    
    while((*src1!='\0') || (*src2!='\0'))
    {
        if (isEnd(*src1))
        {
            src1++;
        }
            else if (isEnd(*src2))
            {
                src2++;
            }
            
            else{
                   if(*src1 > *src2)
                         return 1;
                      if(*src1 < *src2)
                       return -1;
                     src1++;
                     src2++;

            }
    
    }
    return 0;
}


// int isLetter(char ch){

// return ((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'));

// }

// int isEnd(char ch){

//     return ((ch==' ')||(ch=='\t')||((ch=='\n')));

// }






// Function to reverse the string
// using pointers
void reverseString(char* word)
{
    int l, i;
    char *begin_ptr, *end_ptr, ch;
  
    // Get the length of the string
    l = strlen(word);
  
    // Set the begin_ptr and end_ptr
    // initially to start of string
    begin_ptr = word;
    end_ptr = word;
  
    // Move the end_ptr to the last character
    for (i = 0; i < l - 1; i++)
        end_ptr++;
  
    // Swap the char from start and end
    // index using begin_ptr and end_ptr
    for (i = 0; i < l / 2; i++) {
  
        // swap character
        ch = *end_ptr;
        *end_ptr = *begin_ptr;
        *begin_ptr = ch;
  
        // update pointers positions
        begin_ptr++;
        end_ptr--;
    }
}



 char *Atb(char *word){
 int len=strlen(word)+1;
 char newtxt[len];
int i=0;
 while(i<len-1){
     if (word[i]>='A'&&word[i]<='Z')
     {
         newtxt[i]='Z'-(word[i]-'A');  
     }
     else if (word[i]>='a'&&word[i]<='z')
     {
         newtxt[i]='z'-(word[i]-'a'); 
     }
     else{
        
         continue;
     }
    i++;
 }
newtxt[i]='\0';
 word=newtxt;
 return word;

 }



void funcB(char *txt,char *word){

word=Atb(word);
int flag=0;

char firstLetter=*word;
int lenWord=strlen(word);

char lastLetter=*(word+lenWord-1); 
int lenTxt=strlen(txt);

char *start=txt;
int i=0;


while (((*start)!='~')&&(i<=lenTxt-lenWord)&&(start<(start+lenTxt-lenWord))) 
{
    
    while((*start!=firstLetter)&&(*start!=lastLetter)&&((*start)!='~')&&(i<=lenTxt-lenWord)){
       
        start++;
        i++;
        if (i==(lenTxt-lenWord+1)) ////!!!!
        {
        break;
        }
        
    }

char str[lenWord];

    strncpy(str,start,lenWord); // 0 1 2 3 
  str[lenWord]='\0';

 
    if (strcmp_ptr(word,str)==0){
flag++;
if (flag==1)
{
     printf("%s",str);
   
}else{
   printf("~");
     printf("%s",str);
}

    
    start++;
    i++;
    }

    else{

        reverseString(word);
        if (strcmp_ptr(word,str)==0){
flag++;
if (flag==1)
{
     printf("%s",str);
    printf("~");
}else{
   printf("~");
     printf("%s",str);
}
    start++;
    i++;

    }
  
    }


start++;
    
   i++;
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
// text[++j]='\0';

// printf("\n");


// printf("\n");

// ////////

// printf("Atbash Sequences: ");
// funcB(text,word);
// printf("\n");




// }


