/*
 *  Write a C Function that display Prime Numbers between Intervals (two numbers) by Making Function.
 *
 * */

#include <stdio.h>
#define TRUE	 1
#define FALSE 	 0
void Display_Prime_Between_Interval(int Start,int End);

int main(void)
{
	int Start,End;
	printf("enter Intervals\n");
	fflush(stdout);
	scanf("%d%d",&Start,&End);
	Display_Prime_Between_Interval(Start,End);

	return 0;
}

void Display_Prime_Between_Interval(int Start,int End)
{
	int index1, index2, flag = TRUE;


	for(index1 = Start; index1<=End; ++index1)
	{
		if(index1 == 0 || index1 == 1)
		{
			++index1;
			if(index1 == 1)
			{
				++index1;
			}
		}
		for(index2 = 2; index2<index1; ++index2)
		{
			if(index1%index2 == 0)
			{
				flag = FALSE;
				break;
			}
		}

		if(flag == TRUE)
		{
			printf("%d\t",index1);
		}
		else
		{
			flag = TRUE;
		}



	}



}

