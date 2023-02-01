#include<stdio.h>
int main()
{
	int i,n,avg,sum=0;
	printf("Enter the number of terms:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		sum+=i;
	}
	printf("Sum of %d is: %d",n,sum);
	avg=sum/n;
	printf("\nAverage of sum: %d",avg);
	return 0;
}