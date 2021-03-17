#include<stdio.h>
#include<stdlib.h>
int elements_sum(int a[],int b[],int count[],int n,int m)
{
	int sum=0,i;
	if(n==0 && m==0)
	{
		return -1;
	}
	if(n==0)
	{
		for(i=0;i<m;i++)
		{
			sum=sum+b[i];
		}
		return sum;
	}
	for(i=0;i<n;i++)
	{
		while(count[a[i]]!=0)
		{
			sum=sum+a[i];
			count[a[i]]--;
		}
	}
	return sum;
}
int main()
{
	int n,m,a[10],b[10],i,j,count[50]={0},sum;
	printf("enter no. of elements of a");
	scanf("%d",&n);
	printf("enter no. of elementf of b");
	scanf("%d",&m);
	printf("enter elements of a");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		count[a[i]]++;
	}
	printf("enter elements of b");
	for(i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
		count[b[i]]--;
	}
	sum=elements_sum(a,b,count,n,m);
	printf("Sum of uncommon elements:%d",sum);
	return 0;
	
}
