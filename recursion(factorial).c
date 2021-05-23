#include<stdio.h>
main()
{
	int n,res;
	printf("enter the value of n:");
	scanf("%d",&n);
	res=fact(n);
	printf("result:%d",res);
}
fact(int n)
{
	int res;
	if(n==0)
	{
		res=1;
	}
	else
	{
		res=n*fact(n-1);
	}
	return res;
}

























