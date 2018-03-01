#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the value");
    scanf("%d\t%d",&a,&b);
    c=a-b;
    if(c%2==0)
    {printf("%d is even",c);
    }
    else
    {
    printf("%d is odd",c);    
    }
}
