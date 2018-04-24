#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
if(n>0 && n<100000)
{
 if(n%2==0)
 {
  printf("Even\n");
 }
 else
 {
  printf("Odd\n");
 }
}
else
{
 printf("Enter number below 100000\n");
}  
return 0;
}
