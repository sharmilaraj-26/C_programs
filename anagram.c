#include<stdio.h>
#include<string.h>
int main()
{
	char a[50],b[50],t;
	int i,j,a1,b1;
	gets(a);
	gets(b);
	a1=strlen(a);
	b1=strlen(b);
	if(a1!=b1)
	{
		printf("Two strings are not anagrams");
	}
	else
	{
		for(i=0;i<a1;i++)
		{
			for(j=i+1;j<a1;j++)
			{
				if(a[i]>a[j])
				{
					t=a[i];
					a[i]=a[j];
					a[j]=t;
				}
				if(b[i]>b[j])
				{
					t=b[i];
					b[i]=b[j];
					b[j]=t;
				}
			}
		}
		for(i=0;i<a1;i++)
		{
			if(a[i]!=b[i])
			{
				printf("Two strings are not anagrams");
				return 0;
			}
			printf("Two strings are anagrams");
			return 0;
		}
	}
}
