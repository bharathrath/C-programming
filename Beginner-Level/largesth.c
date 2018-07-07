#include <stdio.h>

int main(void) {
	int n,b[100],i,j,temp;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(b[j]>b[i])
			{
				temp=b[j];
				b[j]=b[i];
				b[i]=temp;
			}
	}
	}
	for(i=0;i<n;i++)
	{
		printf("%d",b[i]);
	}
	
	return 0;
}
