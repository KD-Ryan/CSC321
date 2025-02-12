//Ryan Aguilar
//CSC 321
//Lab 5a

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int myInt = 3;
	double myDoub = 17.45;
	float myFloat = 3.47;
	char myChar = 'M';

	int arr[10] = {1,2,3,4,5,6,7,8,9,10,11};

	int k = 0; //Used for if-else statements
	int i; //Used in for loop

	printf("Variable a = %i at %p\n", myInt);
	printf("Variable b = %f at %p\n", myDoub);
	printf("Variable c = %f at %p\n", myFloat);
	printf("Variable d = %c at %p\n", myChar);


	/*if(k == 0)
	{
		int number = 15;
	}
	printf("Variable number = %i at %p \n", number);
	*/

	for(i = 0; i < 10; i++)
	{
		printf("arr[%i] = %p \n", arr[i], &arr[i]);
	}

}
