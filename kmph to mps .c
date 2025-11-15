#include<stdio.h>
int main()
{
	int kmph;
	float mps;
	printf("enter value of kmph");
	scanf("%d",&kmph);
	mps=kmph*0.277778;
	printf("%.2f",mps);
	return 0;
}