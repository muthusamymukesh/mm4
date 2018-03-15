#include<stdio.h>

int main() {
   int a,b,c,d;
   printf("enter the value a,b,c");
   scanf("\t%d\t%d\t%d",&a,&b,&c);
   d=a*b%c;
   printf("The value`is %d.",d);
}
