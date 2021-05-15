#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("input number of terms:");
	scanf("%d",&n);
	printf("\nthe even numbers are:");
	for(i=1;i<=n;i++)
	{
		printf("\n%d",2*i);
		sum+=2*i;
	}
	printf("\nthe sum of even natural numbers upto %d terms:%d\n",n,sum);
	return 0;
}

















