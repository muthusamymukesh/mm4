#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the value");
    scanf("%d",&a);
    while(a!=0)
    {
        b=a%10;
        a=a/10;
        if(b%2==1)
        {
        printf("%d",b);
        }
    }
}
