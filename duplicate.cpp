#include<stdio.h>
int main()
{
	int i,j,n,count=0,max=0;
	int a[9]={3,3,4,2,4,4,2,4,4};
	n=sizeof(a)/sizeof(a[0]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				count++;
			}
		}
			if(count>n/2)
			{
				printf("%d",a[i]);
			}
	}
	return 0;
}
