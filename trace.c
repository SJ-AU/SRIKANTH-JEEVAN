#include<stdio.h>
int main()
{
	int a[3][3],i,r,j,c,sum=0;
	printf("enter row and coloums");
	scanf("%d%d",&r,&c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
     for(j=0;j<c;j++)
     {
     	if(i==j)
     	{
     		sum=sum+a[i][j];
		 }
	 }
	 
	}
	printf("%d",sum);
	return 0;
}