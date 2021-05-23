#include<stdio.h>
int main()
{
	char ch;
	printf("To convert lower case to upper case");
	printf("\nenter the character");
	scanf("%c",&ch);
	ch=ch-32;
	printf("\nthe upper case character is%c",ch);
	return 0;
}
