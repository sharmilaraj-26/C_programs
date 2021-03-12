// Given two numbers n,m find a number closest to n and divisible by m Note : n should not be the prime number
#include<stdio.h>
int main()
{
  int n,m,count=0,i;
  printf("enter n and m");
  scanf("%d %d",&n,&m);
  for(i=2;i<n;i++)
  {
    if(n%i==0)
    {
      count=1;
      break;
    }
  }
  if(count==0)
  {
    printf("n should not be prime number");
  }
  for(i=n-3;i<n+3;i++)
  {
  	if(i%m==0)
  	{
  		printf("%d",i);
  		break;
	}
  }
  return 0;
  
}
