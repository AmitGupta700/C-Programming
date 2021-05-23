#include<stdio.h>
int main()
{
	float v,u,a,t;
	printf("To find the final velocity");
	printf("\nenter the value of u,a,t respectively");
	scanf("%f%f%f",&u,&a,&t);
	v=u+a*t;
	printf("\nthe value of v is %f",v);
	return 0;
}
