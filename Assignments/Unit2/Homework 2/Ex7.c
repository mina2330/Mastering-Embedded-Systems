#include<stdio.h>

int main(void)
{
	int x,i,fact;
	printf("Enter an integer ");
	fflush(stdout);
	scanf("%d",&x);

	if(x<0)
		printf("Error!!! Factorial of a negative number doesn't exist.");
	else
	{
		fact=1;
		for(i=x;i>1;i--)
			fact=fact*i;

		printf("Factorial = %d",fact);
	}

	return 0;
}
