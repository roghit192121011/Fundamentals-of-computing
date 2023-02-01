#include<stdio.h>
int main()
{
	int i,x;
	printf("Enter the nth odd number:");
	scanf("%d",&x);
	for(i=0;i<=x;i++)
	{
		if(i%2!=0)
		{
			printf("%d ",i);
		}
	}
	return 0;
}