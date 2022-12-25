#include<stdio.h>
int check (int);
int main()
{
int n,a;
printf("enter the number");
scanf("%d",&n);
a=check(n);
if(a==1)
printf("even number");
else
printf("odd number");
}
int check(int b)
{
if(b%2==0)
return 1;
else
return 0;
}

