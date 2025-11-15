#include<stdio.h>
#include<string.h>
int main()
{
	char name[20];
	gets(name);
	strlwr(name);
	printf("%s",name);
	return 0;
}