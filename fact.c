#include<stdio.h>
int main()
{
int i,n,f=1;
printf("enter the number");
scanf("%d",&n);
for(i=0;i<n;i++)
{
f=f*i;
}
printf("factorial=%d",f);
}
