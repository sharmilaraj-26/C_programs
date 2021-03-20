#include<stdio.h>
void main()
{
	int n,a[10],i,j,c=0,f[10],visited=-1;
	printf("enter number of elements");
	scanf("%d",&n);
	printf("enter elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		c=1;
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				c++;
				f[j]=visited;	
			}
		}
		if(f[i]!=visited)
		{
			f[i]=c;
		}
	}
	
	for(i=0;i<n;i++)
	{
		if(f[i]!=visited)
		{
			printf("%d->%d\n",a[i],f[i]);
		}
	}
	
}
