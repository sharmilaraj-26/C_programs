#include<stdio.h>
void main()
{
	int n,a[50],x,i,j;
	printf("enter no. of elements");
	scanf("%d",&n);
	printf("enter the product value");
	scanf("%d",&x);
	printf("enter elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(x==a[i]*a[i+1])
			{
				printf("pairs are %d,%d",a[i],a[i+1]);
			}
	}
}
