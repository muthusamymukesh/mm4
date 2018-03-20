#include<stdio.h>
#include<string.h>
void main()
{
char a[100];
printf("\n Enter the string:");
scanf("%s",a);
if(a==strrev(a))
{
printf("Palindrome");
}
else
{
printf("Not palindrome");
}
}
