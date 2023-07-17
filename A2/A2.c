
/*
 *  Write a C Function that takes one character and checks if it alphabet or not.
 *
 * */

#include <stdio.h>

void Check_Alphabet(char character);


int main(void)
{
	char ch;
	printf("enter character\n");
	fflush(stdout);
	scanf("%c",&ch);
	Check_Alphabet(ch);

	return 0;
}


void Check_Alphabet(char character)
{
	if((character >= 'A' && character <= 'Z') || (character >= 'a' && character <= 'z'))
		printf("character %c is Alphabet\n",character);
	else
		printf("character %c is not Alphabet\n",character);

}
