#include<stdio.h>
int main()
{
	int a,b;
	printf("\nenter Two Numbers");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\na=%d,b=%d",a,b);
	return 0;
}
