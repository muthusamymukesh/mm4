#include<stdio.h>
void main()
{
    
    int a,i,b=3,c[100];
    printf("Enter the size ");
    scanf("%d",&a);
    printf("\n value");
    for(i=0;i<a;i++)
    {
    scanf("%d",&c[i]);
    }
    printf("\n the value is %d",c[b-1]);
}
