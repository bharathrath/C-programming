#include<stdio.h>
int main()
{
 long int n;
 scanf("%ld",&n);
 if(n>0 && n<=100000)
 {
  printf("Positive");
 }
 else if(n>100000)
 {
  printf("Enter number below 100000");
 }
 else if(n==0)
 {
  printf("Zero");
 }
 else
 {
  printf("Negative");
 }
 return 0;
}
