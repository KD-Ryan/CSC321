//Ryan Aguilar
//CSC321
//Lab 10c

import java.util.Scanner;

public class raguilar10
{
	public static void main(String[] args)
	{
		int radius, height;

		Scanner keyInput = new Scanner(System.in);

		System.out.printf("AREA OF A CYLINDER CALCULATOR\n===================\n\n");
		System.out.printf("Please enter the radius: ");
		radius = keyInput.nextInt();
		System.out.printf("Please enter the height: ");
		height = keyInput.nextInt();

		//Call the calculateArea method
		double area = calculateArea(radius, height);
		
		System.out.printf("The area is: %.2f.\n\n", area);
	}
	
	//Method to calculate area of a cylinder
	//Parameters: r is radius, h is height
	static double calculateArea(int r, int h)
	{
		//Using the equation for calculating the area of a cylinder
		double area = Math.PI * r * r * h;

		return area;
	}
}
