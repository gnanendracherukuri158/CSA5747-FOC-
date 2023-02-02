#include<stdio.h>
int main()
{
	int i=1,f=1,n;
	printf("\nenter a number:");
	scanf("%d", &n);
	while(i<=n)
	{
		f=f*i;
		i=i+1;
	}
	printf("factorial of %d is %d",n,f);
	return 0;
}
