#include<stdio.h>
void main()
{
	int a[50],n,i,j,sumb=0,sumc=0,x=0,b1=0,c1;;
	printf("enter no. of elements");
	scanf("%d",&n);
	printf("enter elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{	
		sumb+=a[i];
		b1++;
		sumc=0;
		for(j=i+1;j<n;j++)
		{
			sumc+=a[j];
		}
		c1=n-b1;
		if((sumb==sumc)&&(b1<c1))
		{
			printf("equal");
			x=0;
			break;
		}
		if(x==0)
		{
			printf("Not possible of spliting");
			break;
		}
	}
	
}
