/*
 * Write a C Function that swaps the value of two integer numbers.
 *
 * */

#include <stdio.h>

void Swap(int num1,int num2);
int number1 = 9,number2 = 12;

int main(void)
{
	int num1, num2;
	printf("enter two numbers\n");
	fflush(stdout);
	scanf("%d%d",&num1,&num2);
	printf("two numbers before swap: %d \t %d\n",number1,number2);
	Swap(number1,number2);
	printf("two numbers after swap:  %d \t %d\n",number1,number2);
	/**************************************************************************/
	/*
	printf("two numbers before swap: %d \t %d\n",num1,num2);
	Swap_Xor(&num1,&num2);
	printf("two numbers after swap:  %d \t %d\n",num1,num2);
	*/
	return 0;
}

void Swap(int num1,int num2)
{
	int temp;
	temp = number1;
	number1 = number2;
	number2 = temp;
}

/**********************************************************
 ***** Another Method without using pointer *****

void Swap_Sum_Sub(int *num1, int *num2)
{
	*num1 = *num1 + *num2;
	*num2 = *num1 - *num2;
	*num1 = *num1 - *num2;
}

************************************************************/

/**********************************************************
 ***** Another Method without using xor *****

void Swap_Xor(int *num1, int *num2)
{
	*num1 = *num1 ^ *num2;
	*num2 = *num1 ^ *num2;
	*num1 = *num1 ^ *num2;
}

************************************************************/
