#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,a[20],i,j,c,ind;
	int* mp;
	printf("enter number");
	scanf("%d",&n);
	mp=(int*) calloc(n,sizeof(int));
	printf("enter elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		mp[a[i]]++;
		
	}
	for(i=0;i<n;i++)
	{
		if(mp[a[i]]==1)
		{
			c=a[i];
			ind=i;
			break;
		}
	}
	printf("Index:%d",i);
}
