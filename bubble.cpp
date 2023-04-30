#include<stdio.h>
int main()
{
	int i,j;
	int a[10]={20,30,60,50,25,10,80,40,90,100};
	int n=sizeof(a)/sizeof(a[0]);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			int temp;
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	printf("the second smallest element:%d",a[1]);
	printf("\n");
	printf("the second largest element is:%d",a[n-2]);
	return 0;
}
