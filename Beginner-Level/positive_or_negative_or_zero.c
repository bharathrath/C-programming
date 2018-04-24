#include<stdio.h>
void main()
{
 long int n;
 printf("Enter an integer: ");
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
}
