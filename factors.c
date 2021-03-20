#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,a[10],b[10],i,j,k,max,ind,t,t1,f;
	printf("enter no. of elements");
	scanf("%d",&n);
	printf("enter elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=1;j<=a[i];j++)
		{
			if(a[i]%j==0)
			{
				f++;
			}
		}
		b[i]=f;
		f=0;
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(b[i]<b[j])
			{
				t=b[i];
				b[i]=b[j];
				b[j]=t;
				t1=a[i];
				a[i]=a[j];
				a[j]=t1;
			}
			else if(b[i]==b[j])
			{
				if(a[i]>a[j])
				{
					t=a[i];
					a[i]=a[j];
					a[j]=t;
				}
			}
		}
	}
	printf("Factor sorted array:");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
	
	
	
	
	
	
	
	
	
	
	
	
