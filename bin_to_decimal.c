#include<math.h>
#include<stdio.h>
void main()
{
	int i=0,dec=0,rem;
	long long bin;
	printf("enter binary number");
	scanf("%lld",&bin);
	while(bin!=0)
	{
		rem=bin%10;
		bin/=10;
		dec+=rem*pow(2,i);
		++i;
	}
	printf("Decimal number:%d",dec);	
}
