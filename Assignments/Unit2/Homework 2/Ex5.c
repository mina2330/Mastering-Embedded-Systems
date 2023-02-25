#include<stdio.h>

int main(void)
{
	char ch;
	printf("Enter a character: ");
	fflush(stdout);
	scanf("%c",&ch);

	if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
		printf("%c is a an alphabet",ch);
	else
		printf("%c is a not an alphabet",ch);


	return 0;

}
