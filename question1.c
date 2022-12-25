#include<stdio.h>
float area(float n);
int main()
{
float n,a;
printf("enter the radius of circle");
scanf("%f",&n);
a=area(n);
printf("area of circle is %f",a);
}
float area(float n)
{
return 3.14*n*n;
}
