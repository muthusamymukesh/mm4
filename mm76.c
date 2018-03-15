#include<stdio.h>

void main()
{
   int x,y=0,i;
   printf("enter the value");
   scanf("\n%d",&x);
   for(i=1;i<=x;++i)
   {
       if(x%i==0)
       {
           y++;
       }
   }
   if(y!=2)
   {
       printf("yes");
   }
   else
   {
       printf("no");
   }
}
