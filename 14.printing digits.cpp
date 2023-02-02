#include<stdio.h>
int main()
{
	long long n;
	int count=0;
	printf("\n enter a number:");
	scanf("%d",&n);
	do
	{
		n=n/10;
		++count;
	}
	while(n!=0);
	printf("number of digits= %d",count);
	return 0;
}
