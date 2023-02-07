#include<stdio.h>
int main(){int sum;
int array[5];
printf("enter the numbers:");
for(int i=0;i<=5;i++)
{
 scanf("%d",&array[i]);
 sum=sum+array[i];
}
 printf("the sum is :%d",sum);
 return 0;
}
