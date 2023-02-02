#include<stdio.h>
int main()
{
	int n,r,rev=0;
	printf("\n enter a number:");
	scanf("%d",&n);
	while (n!=0)
	{
		r=n%10;
		rev=(rev*10)+r;
		n/=10;
	}
	printf("reversed string=%d",rev);
}
