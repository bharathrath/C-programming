#include <stdio.h>

int main()
{
    int i,n;
    int sum=1;
    scanf("%d",&n);
    for(i=1;i<=5;i++)
    {
        sum=n*i;
        printf("%d\t",sum);
    }
    
    return 0;
}
