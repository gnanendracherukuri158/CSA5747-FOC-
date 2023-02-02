#include<stdio.h>
int main()
{
	int n,i=2,sum=0;
	printf("\nenter a number:");
	scanf("%d", &n);
	while(i<=n)
	{
		sum=sum+i;
		i=i+2;
	}
	printf("sum= %d",sum);
	return 0;
}
