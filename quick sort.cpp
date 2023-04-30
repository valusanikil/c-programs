#include<stdio.h>
void quicksort(int a[],int lb,int ub);
int partition(int a[],int lb,int ub);
main()
{
	int i,n,lb=0,ub=n-1;
	int a[6]={6,3,5,7,9,4};
	n=sizeof(a)/sizeof(a[0]);
	quicksort(a,lb,ub);
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	
}
void quicksort(int a[],int lb,int ub)
{
	int loc;
	if(lb<ub)
	{
	loc=partition(a,lb,ub);
	quicksort(a,lb,loc-1);
	quicksort(a,loc+1,ub);
	}
}
int partition(int a[],int lb,int ub)
{
	int n=sizeof(a)/sizeof(a[0]);
	lb=0,ub=n-1;
	int pivot;
	pivot=a[lb];
	int start=lb;
	int end=ub;
	while(start<end)
	{
		int temp;
		while(a[start]<=pivot)
		{
			start++;
		}
		while(a[end]>pivot)
		{
			end--;
		}
		if(start<end)
		{
			temp=a[end];
			a[end]=a[start];
			a[start]=temp;		
		}
	}
	a[lb]=a[end];
	a[end]=pivot;
	return end;
}


