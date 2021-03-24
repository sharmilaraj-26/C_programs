#include<stdio.h>
void main()
{
	int n,a[20],i,j,t,t1;
	printf("enter no. of elements");
	scanf("%d",&n);
	printf("enter elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i+=2)
	{
		for(j=i+2;j<n;j+=2)
		{
			if(a[i]<=a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}   
	for(i=1;i<n;i+=2)
	{
		for(j=i+2;j<n;j+=2)
		{
			if(a[i]>=a[j])
			{
				t1=a[i];
				a[i]=a[j];
				a[j]=t1;
			}
		}
	}
	printf("Final elements are:");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
