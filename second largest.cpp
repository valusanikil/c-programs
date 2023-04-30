#include<stdio.h>
int main()
{
	int i,j,temp;
	int a[7]={20,40,10,5,2,1,30};
	int n=sizeof(a)/sizeof(a[0]);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("%d",a[3]);
	return 0;
}
