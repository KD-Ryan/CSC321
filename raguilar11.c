//Ryan Aguilar
//CSC321 Programming Languages
//Lab 11b

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Function Prototypes
double hypotenuse(double b, double h);

int main(void)
{
	double base;
	double height; 
	printf("CALCULATING A HYPOTENUSE\n================\n");
	printf("Please enter both sides using a space between them (i.e: 5.4 10): ");
	scanf("%lf %lf", &base, &height);
	
	double hypo; 
	hypo = hypotenuse(base, height);
	printf("\nANSWER:\nThe Hypotenuse is: %f \n", hypo);
	return EXIT_SUCCESS;
}

double hypotenuse(double b, double h)
{
	//Following Pythagorean Theorem: a^2 + b^2 = c^2
	return sqrt(pow(b, 2) + pow(h, 2));
}
