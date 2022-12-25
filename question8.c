#include<stdio.h>
int permu(int,int);
int fact(int);
int main()
{
int y,n,r;
printf("enter the n and r ");
scanf("%d%d",&n,&r);
y=permu(n,r);
printf("permutation=%d",y);
}
int permu(int n,int r)
{
int result;
result=fact(n)/fact(n-r);
return result;
}
int fact(int x)
{
int t=1,i;
for(i=1;i<=x;i++){
t=t*i;
}
return t;
}
