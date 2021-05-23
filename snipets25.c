#include<stdio.h>
int main()
{
	int i=1;
	while(i<=5) 
	{
	
	printf("%d",i);
	if(i>2)
	goto here;
	i++;
    }   
}
 other_function()
 { 
  here:
  	printf("the label is other function");
 }
