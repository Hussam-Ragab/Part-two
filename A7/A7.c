/*
 *  Write a C Function that reads two integers and checks if the first is multiple of the second.
 *
 * */

#include <stdio.h>

void Check_Multiple(int num1,int num2);

int main(void)
{
	int number1,number2;
	printf("enter two numbers\n");
	fflush(stdout);
	scanf("%d%d",&number1,&number2);
	Check_Multiple(number1,number2);

	return 0;
}

void Check_Multiple(int num1,int num2)
{
	if(num1%num2 == 0)
	{
		printf("%d is multiple of %d\n",num1,num2);
	}
	else
	{
		printf("%d is not multiple of %d\n",num1,num2);
	}



}
