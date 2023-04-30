#include<stdio.h>
int main()
{
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(i%2==0)
			{
				if(j%2==0)
				{
					printf("* ");
				}
				else
				{
					printf("5 ");
				}
			}
			if(i%2!=0)
			{
				if(j%2==0)
				{
					printf("5 ");
				}
				else
				{
					printf("* ");
				}
			}
		}
		printf("\n");
	}
	return 0;
}
