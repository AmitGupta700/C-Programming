#include<stdio.h>
int main()
{
	int x,y,z;
	printf("Enter three numbers");
	scanf("%d%d%d",&x,&y,&z);
	printf("\nBefore interchanging x=%d,y=%d,z=%d",x,y,z);
	x=x+y+z;
	z=x-y-z;
	y=x-y-z;
	x=x-y-z;
	printf("\nAfter interchanging x=%d,y=%d,z=%d",x,y,z);
	return 0;
}
