#include<stdio.h>
void main()
{
char b[100];
int a,i,c;
printf("\n Enter the size");
scanf("%d",a);
printf("\n Enter the string:");
for(i=1;i<=a;i++)
{
    scanf("%s",b[i]);
}
printf("enter the value");
scanf("%d",&c);
for(i=1;i<=c;i++)
{
    printf(" the value is %s",b[i]);
}
}
