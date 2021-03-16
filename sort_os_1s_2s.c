#include<stdio.h>
void main()
{
	int n,a[50],m,l,h,i,t;
	printf("enter no. of elements");
	scanf("%d",&n);
	printf("enter elements 0,1,2");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	l=0;
	m=0;
	h=n-1;
	while(h>m)
	{
		
		if(a[m]==0)
		{
			t=a[l];
			a[l]=a[m];
			a[m]=t;
			l++;
			m++;
		}
		else if(a[m]==1)
		{
			m++;
		}
		else if(a[m]==2)
		{
			t=a[m];
			a[m]=a[h];
			a[h]=t;
			h--;
		}
	}
	printf("sorted array:");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
