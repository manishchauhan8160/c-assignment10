#include<stdio.h>
float simpleinterest(float,float,float);
int main()
{
float prin,intrate,time,si;
printf("enter the principal,interest rate and time");
scanf("%f%f%f",&prin,&intrate,&time);
si=simpleinterest(prin,intrate,time);
printf("simple interest is %f",si);
}
float simpleinterest(float a,float b,float c)
{
return a*b*c;
}
