#include<stdio.h>
int Relative_Time(int dir,int s1,int s2,int d1,int d2);
int main()
{
	int dir,s1,s2,d1,d2;
	int total;
	printf("enter the direction:");
	scanf("%d",&dir);
	printf("eneter the distance d1 and d2:");
	scanf("%d %d",&d1,&d2);
	printf("enter the speed s1 and s2:");
	scanf("%d %d",&s1,&s2);
	total= Relative_Time(dir,s1,s1,d1,d2);
	printf("%d",total);
	return 0;
}
int Relative_Time(int dir,int s1,int s2,int d1,int d2)
{
	int time1,time2,result;
	time1=d1/s1;
	time2=d2/s2;
	
	if(dir==0)
	{
		result=time1+time2;
	}
	else if(dir==1)
	{
		result=time1-time2;	
	}
	return result;
}
