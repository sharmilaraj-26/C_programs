#include<stdio.h>
void main()
{
	int n,m,a[20],b[20],i,j,k=0,t,uni[20],inter[20];
	printf("enter the no. of elements of a");
	scanf("%d",&n);
	printf("enter the no. of elements of b");
	scanf("%d",&m);
	printf("enter elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter elements");
	for(j=0;j<m;j++)
	{
		scanf("%d",&b[j]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=i+1;j<m;j++)
		{
			if(b[i]>b[j])
			{
				t=b[i];
				b[i]=b[j];
				b[j]=t;
			}
		}
	}
	printf("Union:");
	i=0,j=0;
	while((i<n)&&(j<m))
	{
		if(a[i]<b[j])
		{
			printf("%d ",a[i]);
			i++;
		}
		else if(a[i]>b[j])
		{
			printf("%d ",b[j]);
			j++;
		}
		else
		{
			printf("%d ",a[i]);
			inter[k]=a[i];
			i++;
			j++;
			k++;
		}
	}
	while(i<n)
	{
		printf("%d ",a[i]);
		i++;
	}
	while(j<m)
	{
		printf("%d ",b[j]);
		j++;	
	}
	printf("\nintersection:");
	for(i=0;i<k;i++)
	{
		printf("%d ",inter[i]);
		
	}
	printf("\nExcept:");
	for(i=0;i<n;i++)
	{
		if(a[i]%2==1)
		{
			printf("%d ",a[i]);
		}
	}
	for(i=0;i<m;i++)
	{
		if(b[i]%2==0)
		{
			printf("%d ",b[i]);
		}
	}
}
