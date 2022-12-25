#include<stdio.h>
int main()
{
int n;
printf("enter the number");
scanf("%d",&n);
primefactor(n);
}
void primefactor(int n)
{
int i;
for(i=2;n!=1;i++)
{
while(n%i==0)
{
printf("%d",i);
n=n/i;
}
}
}
