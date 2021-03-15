#include<stdio.h>
void main()
{
	int n,a[50],sum,i,j;
	printf("enter no. of elements");
	scanf("%d",&n);
	printf("enter the sum value");
	scanf("%d",&sum);
	printf("enter elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(sum==a[i]+a[i+1])
			{
				printf("pairs are %d,%d",a[i],a[i+1]);
			}
	}
}
