
/*
 * Write a C function that calculates the required heater activation time
	according to the input temperature of water.
		- if input temperature is from 0 to 30, then required heating time = 7 mins.
		- if input temperature is from 30 to 60, then required heating time = 5 mins.
		- if input temperature is from 60 to 90, then required heating time = 3 mins.
		- if input temperature is more than 90, then required heating time = 1 mins.
		- if temperature is invalid (more than 100), return 0
	Example:
	Input = 10 → output = 7
	Input = 35 → output = 5

 *
 * */

#include <stdio.h>

int Heater_Activation(int temp);

int main(void)
{
	int temperature, Result;
	printf("enter temperature\n");
	fflush(stdout);
	scanf("%d",&temperature);
	Result = Heater_Activation(temperature);
	printf("Required Heating Time = %d minutes\n",Result);


	return 0;
}


int Heater_Activation(int temp)
{
	int time = 0;

	if(temp >= 0 && temp <30)
	{
		time = 7;
	}
	else if(temp >= 30 && temp <60)
	{
		time = 5;
	}
	else if(temp >= 60 && temp <90)
	{
		time = 3;
	}
	else if(temp >= 90 && temp <=100)
	{
		time = 1;
	}
	else if(temp > 100)
	{
		time = 0;
	}

	return time;


}
