/*
 * Write a C function to check if the input is an even number or an odd
 	 number, if even number return 0 if odd number return 1.
 *
 * */

#include <stdio.h>

#define TRUE	1
#define FALSE	0

int Check_Even_Odd(int num);

int main(void)
{
	int number,Result;
	printf("enter number\n");
	fflush(stdout);
	scanf("%d",&number);
	Result = Check_Even_Odd(number);

	if(Result == TRUE)
		printf("%d is Even Number\n",number);
	else
		printf("%d is Odd Number\n",number);

	return 0;
}

int Check_Even_Odd(int num)
{
	if(num%2 == 0)
		return TRUE;
	else
		return FALSE;

}
