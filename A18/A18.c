
/*
 * A positive integer that needs to be determined if it can be expressed as a power of square number.
 *
 * */

#include <stdio.h>

int Check_Power2(unsigned int num);

int main(void)
{
	unsigned int  number;
	printf("enter number\n");
	fflush(stdout);
	scanf("%d",&number);
	if(Check_Power2(number))
	{
		printf("Number can be expressed as a power of square number\n");
	}
	else
	{
		printf("Number can not be expressed as a power of square number\n");
	}

	return 0;
}

int Check_Power2(unsigned int num)
{
	while(num > 1)
	{
		if(num%2 != 0)
		{
			return 0;;
		}

		num = num/2;
	}

	return 1;
}
