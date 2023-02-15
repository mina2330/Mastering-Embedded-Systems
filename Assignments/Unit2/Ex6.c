/*
 * main.c
 *
 *  Created on: Feb 12, 2023
 *      Author: Mina
 */

#include<stdio.h>

int main(void)
	{

	//EX6
		float a,b,c;
		printf("Enter value of a: ");
		fflush(stdout);
		scanf("%f",&a);
		printf("Enter value of b: ");
		fflush(stdout);
		scanf("%f",&b);
		c = b;
		b = a;
		a = c;
		printf("After swapping, value of a =%.2f\nAfter swapping, value of b = %.2f",a,b);
        
	return 0;

	}
