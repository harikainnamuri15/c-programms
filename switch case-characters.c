#include<stdio.h>
int main()
{
	char num;
	scanf("%c",&num);
	int a,b,c;
	printf("enter the values of aandb:");
	scanf("%d%d",&a,&b);
	switch(num)
	{
		case '+': c=a+b;
		printf("sum=%d",c);break;
		case '-': c=a-b;
		printf("difference=%d",c);break;
		case '*': c=a*b;
		printf("multiplication=%d",c);break;
		case '/': c=a/b;
		printf("modulus=%d",c);break;
		default:
			printf("please enter only a,b,c,d");
			break;
	}
	return 0;
}
