#include<stdio.h>
#include<string.h>
void main()
{
	char str[50],res[50];
	int i,j,len,count=0,ind,max=0;
	printf("enter string");
	gets(str);
	len=strlen(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]!=' ')
		{
			count++;
		}
		else
		{
			if(count>max)
			{
				if(count%2==0)
				{
					max=count;
					ind=i-max;
				}
			}		
			count=0;	
		}
	}
	if(count>max)
	{
		if(count%2==0)
		{
			max=count;
			ind=len-max;
		}
	}
	j=0;
	for(i=ind;i<ind+max;i++)
	{
		res[j]=str[i];
		j++;
	}
	printf("Even maximum length word:%s",res);
}
