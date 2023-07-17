
/*
 * Write a C function to count the number of 1’s in an unsigned 32-bit integer.
 *
 * */

#include <stdio.h>

int Count_Ones(unsigned int num);

int main(void)
{
	unsigned int number;
	printf("enter number\n");
	fflush(stdout);
	scanf("%x",&number);
	printf("Number of Ones = %d\n",Count_Ones(number));

	return 0;
}

int Count_Ones(unsigned int num)
{
	int index,counter=0;

	for(index = 0; index < 32; ++index)
	{
		if((num&(1<<index)))
		{
			++counter;
		}
	}

	return counter;
}



