
/*
 * Write a C Function that prints the cube of any number.
 *
 * */

#include <stdio.h>

void Print_Cube(int num);

int main(void)
{
	int number;
	printf("enter number\n");
	fflush(stdout);
	scanf("%d",&number);
	Print_Cube(number);

	return 0;
}

void Print_Cube(int num)
{
	int cube;
	cube = num * num * num;
	printf("Cube of %d = %d\n",num,cube);

}


