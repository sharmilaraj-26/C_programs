#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,a[30],max,ind,i,j,k;
	int* freq;
	printf("enter no. of elements");
	scanf("%d",&n);
	freq=(int*) calloc(n,sizeof(int));
	printf("enter elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		freq[a[i]]++;
	}
	for(i=0;i<n;i++)
	{
		max=freq[0];
		ind=0;
		for(j=0;j<n-1;j++)
		{
			if(max<freq[j])
			{
				max=freq[j];
				ind=j;
			}
		}
		for(k=0;k<max;k++)
		{
			printf("%d",ind);
		}
		freq[ind]=0;
	}
	return 0;

	
}
