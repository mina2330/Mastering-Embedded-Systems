#include<stdio.h>

int main(void)
{
	char op;
	float num1,num2,result;
	printf("Enter operator either + or - or * or divide: ");
	fflush(stdout);
	scanf("%c",&op);

	printf("Enter two operands: ");
	fflush(stdout);
	scanf("%f %f",&num1,&num2);

	switch(op)
	{
	case'+':
		result = num1+num2;
		printf("%.2f %c %.2f = %.2f",num1,op,num2,result);
		break;
	case'-':
		result=num1-num2;
		printf("%.2f %c %.2f = %.2f",num1,op,num2,result);
		break;
	case '*':
		result=num1*num2;
		printf("%.2f %c %.2f = %.2f",num1,op,num2,result);
		break;
	case '/':
		result=num1/num2;
		printf("%.2f %c %.2f = %.2f",num1,op,num2,result);
		break;
	default:
		printf("not a valid operand");

	}



	return 0;
}
