#include<stdio.h>
int main()
{
	int i,j,n=5,k,m=1;
	for(i=n;i>=0;i--)
	{
		for(j=0;j<=i;j++)
		{
			printf(" ");
		}
		
		for(k=0;k<m;k++)
		{
			printf("*");
		}
		printf("\n");
		m++;
	}
}
