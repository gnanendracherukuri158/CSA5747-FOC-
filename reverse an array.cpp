#include<stdio.h>
int main()
{
	int n,c,d,a[100],b[100];
	printf("enter the number of elements in array\n");
	scanf("%d",&n);
	printf("enter the array elements\n");
	for(c=0;c<n;c++)
	scanf("%d",&a[c]);
	for(c=n-1,d=0; c>=0;c--,d++)
    
    b[d] = a[c];
    for(c=0; c<n; c++)
    a[c]=b[c];
    printf("reverse array is\n");
    for(c=0; c<n; c++)
    printf("%d\n",a[c]);
    return 0;
}
