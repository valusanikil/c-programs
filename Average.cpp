#include<stdio.h>
int main()
{
	int i,n,sum=0;
	int arr[5]={10,20,30,40,50};
	float avg;
	n=sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}
	avg=sum/n;
	printf("%f",avg);
	return 0;
}
