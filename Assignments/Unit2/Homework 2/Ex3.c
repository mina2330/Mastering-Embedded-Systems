/*
 * main.c
 *
 *  Created on: Feb 12, 2023
 *      Author: Mina
 */
#include<stdio.h>

int main(void)
{
	float x[3],max;
	int i;
	printf("Enter three numbers: ");


	for(i=0;i<3;i++)
	{
		fflush(stdout);fflush(stdin);
		scanf("%f",&x[i]);
	}
	max = x[0];

	for(i=1;i<3;i++)
	{
		if (x[i]>max)
			max=x[i];

	}


	printf("Largest number = %.2f",max);

	return 0;

}


