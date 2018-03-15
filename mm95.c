#include<stdio.h>

int main() {
   int x,y,z,a;
   printf("enter the value\n principal amount,time,rate");
   scanf("\n%d\t%d\t%d",&x,&y,&z);
   a=(x*y*z)/100;
   printf("The value is %d",a);
}
