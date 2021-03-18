#include<stdio.h>
void main()
{
	int m,n,a[50],b[50],c[50],i,j,k,t;
	printf("enter no. of elements of a");
	scanf("%d",&n);
	printf("enter no. of elements of b");
	scanf("%d",&m);
	if(n!=m)
	{
		printf("Two arrays must be of equal elements!!!");
	}
	else
	{
		printf("enter the elements of a");
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		printf("enter the elements of b");
		for(j=0;j<m;j++)
		{
			scanf("%d",&b[j]);
		}
		for(i=0;i<n;i++)
		{
			c[i]=a[i];
		}
		for(j=0;j<m;j++)
		{
			c[i]=b[j];
			i++;
		}
		for(i=0;i<n+m;i++)
		{
			for(j=i+1;j<n+m;j++)
			{
				if(c[i]<c[j])
				{
					t=c[i];
					c[i]=c[j];
					c[j]=t;
				}
			}
		}
		printf("merged sort");
		for(k=0;k<n+m;k++)
		{
				printf("%d ",c[k]);
		}
		printf("\n");
		printf("Without duplicates:");
		for(k=0;k<n+m;k++)
		{
			if(c[k]!=c[k+1])
			{
				printf("%d ",c[k]);
			}
		}
	}
}
