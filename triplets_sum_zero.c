#include<stdio.h>
void main()
{
	int n,a[20],i,j,k;
	printf("enter no. of elements");
	scanf("%d",&n);
	printf("enter elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Triplets are:");
	for(i=0;i<=n-3;i++)
	{
		for(j=i+1;j<=n-2;j++)
		{
			for(k=j+1;k<=n-1;k++)
			{
				if((a[i]+a[j]+a[k])==0)
				{
					printf("%d %d %d\n",a[i],a[j],a[k]);
				}
			}
		}
	}
}
