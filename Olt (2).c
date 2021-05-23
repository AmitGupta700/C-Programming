#include<stdio.h>
int main()
{
	switch(printf("Hi"))
	{
		case 1: printf("Welcome");
		case 2: printf("Have a Nice day");
		case 3: printf("Bye Bye");break;
		default: printf("Go to Hell");
	}
}
