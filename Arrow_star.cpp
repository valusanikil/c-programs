#include<stdio.h>
int main()
{
	int n=10;
	int col=5;
	for(int i=1;i<=n;i++)
	{
		if(i==n/2)
		{
			for(int x=1;x<=n/2;x++)
			{
				printf("* ");
			}
		}
		else
		{
			for(int y=1;y<=n/2;y++)
			{
				printf("  ");
			}
		}
		for(int j=n/2;j<=col;j++)
		{
			printf("* ");
		}
		if(i<n/2)
		{
			col++;
		}
		else if(i>=n/2)
		{
			col--;
		}
		printf("\n");
	}
	
	return 0;
}
