#include<stdio.h>
int main()
{
	int a=1,sum=0,n;
	printf("\nenter a number:");
	scanf("%d", &n);
	while (a<=n)
	{
		sum=sum+(a*a);
		a=a+2;
	}
	printf("\n sum= %d",sum);
	return 0;
}
