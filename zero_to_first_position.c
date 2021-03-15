#include<stdio.h>
void main()
{
	int n,a[50],i,j=0,count=0,c[50],k=0;
	printf("enter no. of elements");
	scanf("%d",&n);
	printf("enter elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==0)
		{
			c[j]=a[i];
			j++;
		}
	}
		for(i=0;i<n;i++)
	{
		if(a[i]!=0)
		{
			c[j]=a[i];
			j++;
		}
	}
	printf("Final array:");
	for(i=0;i<n;i++)
	{
		printf("%d",c[i]);
	}
}
