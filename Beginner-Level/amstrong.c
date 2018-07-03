#include <stdio.h>

int main()
{
    int rem,i,n,t;
    int sum=0;
    scanf("%d",&n);
    t=n;
    while(n>0)
    {
        rem=n%10;
        n=n/10;
        sum=sum+(rem*rem*rem);
    }
    if(sum==t)
    {
        printf("yes");
        
    }
    else
    {
        printf("no");
    }

    return 0;
}
