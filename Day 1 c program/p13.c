#include<stdio.h>
int main()
{
	int n,num,sum=0;
	printf("Enter a digit:");
	scanf("%d",&num);
	while(num>0)
	{
		n=num%10;
		sum+=n;
		num=num/10;
	}
	printf("Sum of digit: %d",sum);
	return 0;
}