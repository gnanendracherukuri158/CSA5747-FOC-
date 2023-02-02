#include<stdio.h>
int main()
{
	int f0=0,f1=1,fib,i,n;
	printf("\nenter a number:");
	scanf("%d",&n);
	printf("%d %d",f0,f1);
	for(i=2;i<n;++i)
	{
		fib=f0+f1;
		printf("%d",fib);
		f0=f1;
		f1=fib;
	}
	return 0;
}
