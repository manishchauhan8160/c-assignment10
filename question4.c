#include<stdio.h>
void printn(int);
int main()
{
int n;
printf("enter the range");
scanf("%d",&n);
printn(n);
}
void printn(int a)
{
int i;
for(i=1;i<=a;i++)
printf("%d\n",i);
}
