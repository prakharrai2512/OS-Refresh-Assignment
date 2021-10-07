#include <stdio.h>
#include<stdlib.h>
#include <math.h>

void add(int a,int b){
    printf("%d",a+b);
}

void sub(int a,int b){
    printf("%d",a-b);
}

void mul(int a,int b){
    printf("%d",a*b);
}

void divy(int a,int b){
    printf("%f",a/(float)b);
}

void expo(int a,int b){
    printf("%lf",pow(a,b));
}

int main(){
   void (*func[])(int,int) = {add,sub,mul,divy,expo};
   printf("Enter i for add,sub,mul,div,expo in order and then input the two values required ");
   int i,a,b;
   scanf("%d",&i);
   scanf("%d",&a);
   scanf("%d",&b);
   (*func[i])(a,b);
   
}