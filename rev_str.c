#include<stdio.h>
#include<string.h>
void main()
{
	char str[50],temp;
	int len,i=0,j;
	printf("enter the string");
	gets(str);
	len=strlen(str);
	j=len-1;
	while(i<len/2)
	{
		if((str[i]>='a'&& str[i]<='z')||(str[i]>='A'&&str[i]<='Z')||(str[i]>='0'&&str[i]<='9'))
		{
			if((str[j]>='a'&& str[j]<='z')||(str[j]>='A'&&str[j]<='Z')||(str[j]>='0'&&str[j]<='9'))
			{
				temp=str[i];
				str[i]=str[j];
				str[j]=temp;
				i++;
				j--;
			}
			else
			{ 
				j--;
			}
		}
		else
		{
			i++;
		}
			
	}
	printf("reversed string is:%s",str);
}
	
