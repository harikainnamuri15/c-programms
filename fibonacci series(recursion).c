//fibonacci series
/* series formate=given nos
a=1,b=2
1+2  2+3   3+5   5+8
3     5     8     13................
*/

#include<stdio.h>
int fib(int n1)
{
	if(n1==0)
	return 0;
	else if(n1==1)
	return 1;
	else
	return (fib(n1-1)+fib(n1-2));
}
int main()
{
	int n,i;
	printf("enter how many numbers do you want in the series \n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("%d\t",fib(i));
	}
	return 0;
}
