#include<stdio.h>
void main()
{
	int n,a[50],i,j;
	printf("enter no. of elements");
	scanf("%d",&n);
	printf("enter elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	i=0;
	j=n-1;
	while(i<j)
	{
		printf("%d %d ",a[j],a[i]);
		i++;
		j--;
		if(i==j)
		{
			printf("%d",a[i]);
		}
	}
}
