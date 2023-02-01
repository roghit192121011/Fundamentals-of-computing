#include<stdio.h>
int main()
{
	int i,z,sum=0;
	printf("Enter the no of term:");
	scanf("%d",&z);
	for(i=0;i<=z;i++)
	{
		sum+=i;
	}
	printf("Result:%d",sum);
	return 0;
}