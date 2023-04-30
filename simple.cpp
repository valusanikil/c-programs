#include<stdio.h>
int main()
{
	int i,a[100],data,n,res;
	printf("the size:");
	scanf("%d",&n);
	printf("the elements are:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the data:");
	scanf("%d",&data);
	for(i=0;i<n;i++)
	{
		if(data==a[i])
		{
			res=i;
		}
	}
	printf("the loc is:%d",res+1);
	return 0;
}
