#include<stdio.h>
void swap(int*,int*);
void main()
{
	int a=10,b=20;
	printf("before swapping:%d\t%d\n",a,b);
	swap(&a,&b);
}
void swap(int* x,int* y)
{
    int	temp=*x;
	*x=*y;
	*y=temp;
	printf("after swapping:\t%d\t%d",*x,*y);
}
