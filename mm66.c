#include<stdio.h>
void main()
{
    int a,c=0,i;
    printf("enter the value");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        {
        c++;
        }
    }
    if(c==2)
    {
        printf("\nprime");
    }
      else
    {
        printf("\nnot prime");
    }
    
}
