#include<stdio.h>
int main()
{
	int i,j,c[10];
	int a[5]={1,2,3,4,5};
	int b[5]={6,7,8,9,10};
	for(i=0,j=0;i<5;i++,j+=2)
	{
		c[j]=a[i];
	}
	for(i=4,j=1;i>=0;i--,j+=2)
	{
		c[j]=b[i];
	}
	for(i=0;i<10;i++)
	{
		printf("%d\t",c[i]);
	}
	
	return 0;
}
