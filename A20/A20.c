/*
 * Write a C function to count the maximum number of consecutive 1’s in an unsigned 16 bits integer.
 *
 * */

#include <stdio.h>

int Count_Consecutive_Ones(unsigned int num);

int main(void)
{
	unsigned int number;
	printf("enter number\n");
	fflush(stdout);
	scanf("%x",&number);
	printf("Number of Consecutive Ones = %d\n",Count_Consecutive_Ones(number));

	return 0;
}

int Count_Consecutive_Ones(unsigned int num)
{
	int index,counter=0,max=0;

	for(index = 0; index < 16; ++index)
	{
		if((num&(1<<index))>>(index) == 1)
		{
			++counter;
			if(counter > max)
			{
				max = counter;
			}
		}
		else
		{
			counter = 0;
		}
	}

	return max;
}

