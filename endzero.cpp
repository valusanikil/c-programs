#include<stdio.h>
int main()
{
	int i,count=0,n;
	int arr[10]={2,3,0,5,4,0,6,0,0,9};
	n=sizeof(arr)/sizeof(arr[0]);
	printf("the original array\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		if(arr[i]!=0)
		{
			arr[count++]=arr[i];
		}
	}
	for(i=count;count<n;count++)
	{
		arr[count]=0;
	}
	printf("the sorted array\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
