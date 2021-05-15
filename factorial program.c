#include<stdio.h>
int main()
{
	int i,n;
	unsigned long fact=1;
	printf("enter the value:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact*=i;
	}
	printf("factorial of %d=%u",n,fact);
	return 0;
}




















