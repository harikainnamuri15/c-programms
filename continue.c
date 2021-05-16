#include<stdio.h>
int main()
{
	int i=1,n=10;
	while(i<=n)
	{
		if(i%3==0)
		{
			i++;
			continue;
		}
		printf("%d ",i);
		i++;
	}
	return 0;
}








