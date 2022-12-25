#include<stdio.h>
int combination(int,int);
int fact(int);
int main()
{
int x,n,r;
printf("enter the n and r");
scanf("%d%d",&n,&r);
x=combination(n,r);
printf("combination=%d",x);
}
int combination(int n,int r)
{
int c;
c=fact(n)/fact(r)*fact(n-r);
return c;
}
int fact(int x)
{
int t=1,i;
for(i=1;i<=x;i++)
t=t*i;
return t;
}
