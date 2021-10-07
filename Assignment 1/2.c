#include <stdio.h>
#include<stdlib.h>
#include<string.h>

char n1[32];
char n2[32];




int main()  {
   char input[80];
   int bin[80];
   for(int i=0;i<80;i++){
       bin[i]=0;
   }
   scanf("%s",input);
   int len = strlen(input);
   int rem=0,cnt=0,temp;
   for(int i=0;i<len;i++){
       //printf("%d %c \n",len, input[i]);
       bin[len-i-1] = ((int)input[i])-48;
   }
   
}