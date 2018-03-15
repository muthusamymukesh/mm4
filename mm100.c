#include<stdio.h>

int main() {
   int a,d,e=1;
   printf("enter the value a");
   scanf("\t%d",&a);
   while(a!=0)
   {
       d=a%10;
       e=e*d;
       a=a/10;
   }
   
   printf("The value`is %d.",e);
}
