#include<stdio.h>

int main(void)
{
	int x,i,sum=0;
	printf("Enter an integer ");
	fflush(stdout);
	scanf("%d",&x);

	for (i=x;i>0;i--)
		sum=sum+i;

	printf("Sum = %d",sum);


	return 0;
}
