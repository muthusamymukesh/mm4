#include<stdio.h>
void main()
{
    char a[10];
    int b[10],d,i,sum;
    printf("Enter the size ");
    scanf("%d",&d);
    printf("\n characters");
    scanf("%s",&a);
    for(i=0;i<d;i++)
    {
        b[i]=a[i];
    }
    sum=0;
    for(i=0;i<d;i++)
    {
        sum+=b[i];
    }
    printf("\n the ascii is %d",sum);
}
