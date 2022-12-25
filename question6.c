#include<stdio.h>
int main()
{
int n,f;
printf("enter the number");
scanf("%d",&n);
f=fact(n);
printf("factorial=%d",f);
}
int fact(int a)
{
int i,fac=1;
for(i=1;i<=a;i++)
{
fac=fac*i;
}
return fac;
}
