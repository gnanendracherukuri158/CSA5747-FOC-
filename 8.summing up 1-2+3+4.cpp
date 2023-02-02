#include<stdio.h>
int main()
{
	int n,i=1,s=1,sum=0;
	printf("\nenter a number:");
	scanf("%d", &n);
	while(i<=n)
	{
		sum=sum+(s*i);
		i=i+1;
		s=-s;
	}
	printf("sum=%d",sum);
	return 0;
}
