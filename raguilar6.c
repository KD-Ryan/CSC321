//Ryan Aguilar
//CSC321
//Lab 6b

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int x = 5;
	int y = 10;
	int answer = 0;

	answer = x + y * x / y - x;
	printf("Answer to first expr = %i\n", answer);

	answer = - x - y / x * y + x;
	printf("Answer to second expr = %i\n", answer);

	answer = x + y - x / y;
	printf("Answer to third expr = %i\n", answer);
}	
