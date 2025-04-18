//Ryan Aguilar
//CSC321
//Midterm 2 C Program


//Function Prototypes
void loopRun(int num);

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int userNum;

	printf("Enter any number to print my name: ");
	scanf("%d", &userNum);

	loopRun(userNum);

	return EXIT_SUCCESS;
}


//Function for loopRun
void loopRun(int userNum)
{
	int i;
	for(i = 0; i < userNum; i++)
	{
		printf("Ryan Aguilar\n");
	}
}
