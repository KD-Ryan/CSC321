//Ryan Aguilar
//CSC321
//Lab 9c

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int guess = 0;
	int randNum = 0;
	int i;

	srand(time(NULL));
	randNum = 1 + rand() % 20;
	
	printf("DEBUG: CORRECT ANSWER IS %d\n", randNum);
	
	while(guess < 1 || guess > 20)
	{
		printf("Guess my number, it's between 1 and 20: ");
		scanf("%d", &guess);

		if(guess < 1 || guess > 20)
		{
			printf("Error, Try again.");
		}
	}

	if(randNum == guess)
	{
		for(i = 0; i < guess; i++)
		{
			printf("You won and guessed my number correctly!\n");
		}
	}
	else if(randNum > guess)
	{
		printf("\nOops, incorrect number! Your guess was less than my number, which was %d \n", randNum);
	}
	else if(randNum < guess)
	{
		printf("\nOops, incorrect number! Your guess was bigger than my number, which was %d \n", randNum);
	}

	return EXIT_SUCCESS;
}
