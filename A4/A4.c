
/*
 * Write a C Function that return the addition or subtraction or multiplication or division for two numbers.
   The function should take the required operation and two numbers as arguments. It also should check
	that the input operation is one of those operation that mentioned before and if not it should return error.
	The function should be implemented using switch case.
 *
 * */

#include <stdio.h>
#define FALSE	0
float Calculator(char operation, float num1, float num2);


int main(void)
{
	float number1,number2,Result;
	char operation;
	printf("enter two numbers\n");
	fflush(stdout);
	scanf("%f%f",&number1,&number2);
	printf("enter operation\n");
	fflush(stdout);
	scanf(" %c",&operation);
	Result = Calculator(operation, number1, number2);

	if(Result == FALSE)
		printf("error operation so no Result\n");
	else
		printf("Result of %.2f %c %.2f = %.2f\n",number1,operation,number2,Result);

	return 0;
}

float Calculator(char operation, float num1, float num2)
{
	float Res;

	switch(operation)
	{
	case '+':
		Res = num1 + num2;
		break;
	case '-':
		Res = num1 - num2;
		break;
	case '*':
		Res = num1 * num2;
		break;
	case '/':
		Res = num1 / num2;
		break;
	default:
		Res = FALSE;
		break;
	}

	return Res;
}


