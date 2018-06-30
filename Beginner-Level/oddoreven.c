#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
if(n>=1&&n<=100000)
{
if(n%2==0)
printf("Even");
else
printf("Odd");
}
else
printf("Invalid! thenumber should be within 1lakh");
return 0;
}
