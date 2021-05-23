#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("swapping of two numbers using third variable");
	printf("\nenter numbers");
	scanf("%d%d",&a,&b);
	printf("\nBefore swap %d%d",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("\nAfter swap %d%d",a,b);
	return 0;
}
