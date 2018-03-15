#include<stdio.h>

int main() {
  int a[200],b,c,n;
  printf("size");
  scanf("%d",&n);
  printf("enter the value");
  for(c=1;c<=n;c++)
  {
  scanf("%d",&a[c]);
  }
  for(c=1;c<=n;c++)
  {
     if(a[c]!=c)
     {
    printf("the change is %d.",a[c]);     
     }
  }}
