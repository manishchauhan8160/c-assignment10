#include<stdio.h>
void printodd(int);
int main()
{
int n;
printf("enter the range");
scanf("%d",&n);
printodd(n);
}
void printodd(int n)
{
int i;
for(i=1;i<=n;i+=1)
{
if(i%2!=0)
printf("%d\n",i);
}
}
