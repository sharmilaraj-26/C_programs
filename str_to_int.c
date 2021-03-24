#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
	char str[20];
	int a;
	printf("enter string");
	gets(str);
	a=atoi(str);
	printf("String is:%s\nInteger is:%d",str,a);
}
