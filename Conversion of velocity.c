#include<stdio.h>
int main()
{
	float velms,velkh;
	printf("\nEnter velocity in km/hr");
	scanf("%f",&velkh);
	velms=5.0/18*velkh;
	printf("Equivalent velocity is %fm/sec",velms);
	return 0;
}
