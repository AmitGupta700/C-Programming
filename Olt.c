#include<stdio.h>
int main()
{
	int i=3;
	goto TAG;
	i=1;
	while(i<=10)
	{
		printf("%d\n",i);
		TAG:
			i=i+2;
	}
}
