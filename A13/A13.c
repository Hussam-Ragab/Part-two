/*
 * In this challenge write a function to add two floating numbers.
	Determine the integer floor of the sum. The floor is the truncated float
	value, anything after the decimal point is dropped. For instance
	floor(1.1+3.05)=floor(4.15)=4
 *
 * */

#include <stdio.h>

int Add_Floating(float num1, float num2);

int main(void)
{
	float number1,number2;
	printf("enter two numbers\n");
	fflush(stdout);
	scanf("%f%f",&number1,&number2);
	printf("floor = %d\n",Add_Floating(number1, number2));

	return 0;
}

int Add_Floating(float num1, float num2)
{
	return (int)(num1 + num2);
}
