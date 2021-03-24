#include<stdio.h>
void main()
{
	int a,b,c=0,i,t;
	printf("enter a and b");
	scanf("%d %d",&a,&b);
	for(i=0;i<b;i++)
	{
		t=a*i;
		c+=t;
	}
	printf("Multiply: %d",c);
	
}
