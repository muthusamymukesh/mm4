#include<stdio.h>
int main() {
   int i,a,b[100],n;
   printf("enter the size");
   scanf("%d",&a);
   printf("value");
   for(i=1;i<=a;i++)
   {
       scanf("%d",&b[i]);
   }
   printf("enter the value");
   scanf("%d",&n);
   printf("%d",b[n]);
}
