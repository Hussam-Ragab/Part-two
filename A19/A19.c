
/*
 * Write a C function that return 0 if a given number is a power of 3, otherwise return 1 (except 3 to the power of 0).
 *
 * */

#include <stdio.h>

int Check_Power3(unsigned int num);

int main(void)
{
	unsigned int  number;
	printf("enter number\n");
	fflush(stdout);
	scanf("%d",&number);
	if(!(Check_Power3(number)))
	{
		printf("Number can be expressed as a power of 3 number\n");
	}
	else
	{
		printf("Number can not be expressed as a power of 3 number\n");
	}

	return 0;
}

int Check_Power3(unsigned int num)
{
	while(num >= 0)
	{
		if((num%3 != 0) || (num == 0))
		{
			return 1;;
		}
		num = num/3;
	}

	return 0;
}
