#include<stdio.h>
int main()
{
	int num,sum=0,i;
	printf("enter the number:");
	scanf("%d",&num);
	printf("1 + ");
	for(i=2;i<=num;i++)
	{
		if(num==0)
		{
			printf("1/%d",i);
		}
		else
		{
			printf("1/%d +",i);
		}
		for(i=1;i<=num;i++)
		{
			sum =sum + i;
		}
		printf("\nsum=1/%d",sum);
		return 0;
	}
}
















