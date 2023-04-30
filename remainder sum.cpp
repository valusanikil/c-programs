#include<stdio.h>
int main()
{
	int i,rem,sum=0;
	int n=12;
	for(i=1;i<=n;i++)
	{
		rem=n%i;
		sum=sum+rem;		
	}
		
	printf("%d",sum);
	return 0;
}
