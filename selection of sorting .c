#include<stdio.h>
int main()
{
	int a[0],i,j,n,temp,min;
	printf("enter no. of elements into array");
	scanf("%d",&n);
	printf("enter the elements to array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}printf("before swaping");
	for(i=0;i<n;i++)
	{printf("%d",a[i]);}
	for(i=0;i<n;i++)
	{min=i;
	for(j=i+1;j<n;j++)
	{if(a[j]<a[min]);
	{min=j;

	}
	}
	temp=a[i];
	a[i]=a[min];
	a[min]=temp;
	}
	for(i=0;i<n;i++)
	{printf("%d\t",a[i]);
	
	}return 0;
}