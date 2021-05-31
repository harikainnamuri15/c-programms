//c technical interview qs using switch case
#include<stdio.h>
void main()
{
	int i=1;
	for(i=1;i<=20;i++)
	{
		switch(i)
		{
			case 0:i+=3;
			case 1:i+=3;
			case 2:i+=3;
			case 3:i+=3;
			default:i+=3;
		}
		printf("i value:%d\n",i);
	}
}









