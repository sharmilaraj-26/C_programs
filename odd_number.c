#include<stdio.h>
void main()
{
	int start,end,i;
	printf("enter start and end value");
	scanf("%d %d",&start,&end);
	for(i=start;i<=end;i++)
	{
		if(i%2==1)
		{
			printf("%d",i);
			printf(" ");
		}
	}
}
