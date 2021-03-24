#include<stdio.h>
void main()
{
	int a,b,i,j;
	printf("enter a and b below 200");
	scanf("%d %d",&a,&b);
	for(i=a;i<=b;i++)
	{
		for(j=1;j*j>=i;j++)
		{
			if(j*j==i)
			{
				printf("%d ",i);
			} 
		}
	}
}
