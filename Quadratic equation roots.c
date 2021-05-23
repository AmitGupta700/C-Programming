#include<stdio.h>
#include<math.h>
int main()

{
	float a,b,c,D,x1,x2,i,rp,ip;
	printf("enter the values of a,b,c");
	scanf("%f%f%f",&a,&b,&c);
	D=b*b-(4*a*c);
	if (D>0)
{   
	printf("Roots are real and distinct");
	x1=(-b-sqrt (D))/(2.0*a);
	x2=(-b+sqrt (D))/(2.0*a);
	printf("roots are %f%f",x1,x2);
}
	else if (D==0)
{
	x1=x2=-b/(2*a);
	printf("x1=x2=%f",x1);
}
	else  (D<0);
{
	rp= -b/(2*a);
	ip= sqrt(-D)/(2*a);
	printf("x1=%f+i%f,x2=%f+i%f,rp,ip,rp,ip);
}
	return 0;
}
