#include<stdio.h>
void main()
{
    
    int a,i,b[100],s=0;
    printf("Enter the size ");
    scanf("%d",&a);
    printf("\n value");
    for(i=1;i<=a;i++)
    {
    scanf("%d",&b[i]);
    }
    for(i=1;i<=a;i++)
    {
        s=s+b[i];
    }
    printf("\n the sum is %d",s);
}
