/*
 * main.c
 *
 *  Created on: Feb 12, 2023
 *      Author: Mina
 */

#include<stdio.h>

int main(void)
	{

//	//EX7 a failed trial was trying to manipulate the addresses knowing that memory locations will be contiguous
	// without using pointers but it was a mess
//		float a,b;
//		printf("Enter value of a: ");
//		fflush(stdout);
//		scanf("%f",&a);
//		printf("Enter value of b: ");
//		fflush(stdout);
//		scanf("%f",&b);
//		&a=&a-sizeof(float);
//		&b=&b+sizeof(float);
//		printf("%f %f",a,b);
	//EX7 after thinking for a while I failed and used ChatGpt to get this answer
		float a,b;
		printf("Enter value of a: ");
		fflush(stdout);
		scanf("%f",&a);
		printf("Enter value of b: ");
		fflush(stdout);
		scanf("%f",&b);
		a=a+b;
		b=a-b;
		a=a-b;
		printf("After swapping, value of a =%.2f\nAfter swapping, value of b = %.2f",a,b);

	return 0;

	}
