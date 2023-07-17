
/*
 * Write a C Function that check if the number if positive or negative.
 *
 * */

#include <stdio.h>

void Check_Polarity(int num);


int main(void)
{
	int number;
	printf("enter number\n");
	fflush(stdout);
	scanf("%d",&number);
	Check_Polarity(number);

	return 0;
}


void Check_Polarity(int num)
{
	if(num > 0)
		printf("number %d is Positive\n",num);
	else if(num < 0)
		printf("number %d is Negative\n",num);
	else
		printf("number is Zero");

}
