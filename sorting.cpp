#include<stdio.h>
int main()
{
	int a[6]={6,5,9,8,3,2};
	int i,j,n,min;
	int temp;
	n=sizeof(a)/sizeof(a[0]);
	for(i=0;i<n;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]>a[min])
			{
				min=j;
			}
		}
		if(min!=i)
		{
			temp=a[min];
			a[min]=a[i];
			a[i]=temp;
			
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}
