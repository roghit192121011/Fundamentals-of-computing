#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("Enter the nth number:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		sum+=i*i*i;
	}
	printf("sum of cube: %d",sum);
	return 0;
}