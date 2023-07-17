/*
 * Given two integers: L and R, Find the maximal value of A xor B where
	A and B satisfy the condition L =< A <= B <= R Constrains: 1 <= L <= R <= 1000
	Input format: the input contains two lines first line contains L and next line contains R.
	Output format: The maximum value of A xor B
 *
 * */

#include <stdio.h>

int Max_XOR(int num1,int num2);

int main(void)
{
	int number1,number2;
	printf("enter number\n");
	fflush(stdout);
	scanf("%d%d",&number1,&number2);
	printf("Max Xor = %d\n",Max_XOR(number1,number2));

	return 0;
}

int Max_XOR(int num1,int num2)
{
	int index1,index2,max=0,temp;

	for(index1=num1;index1<=num2;index1++)
	{
		for(index2=index1;index2<=num2;index2++)
		{
			temp = index1^index2;
			if(temp>max)
				max = temp;
		}

	}
return max;

}

