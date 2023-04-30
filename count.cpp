#include<stdio.h>
#include<string.h>
int main()
{
char s[10]="Nikil";

int i,count=0;
int l=strlen(s);
for(i=0;i<l;i++)
{
	if(s[i]!='\0')
	{
		count++;
	}
}
printf("%d",count);

return 0;
}
