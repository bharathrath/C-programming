#include<stdio.h>
#include<ctype.h>
int main()
{
char ch;
scanf("%c",&ch);
if(isalpha(ch))
printf("Alphabet");
else
printf("No");
return 0;
}
