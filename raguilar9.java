//Ryan Aguilar
//CSC321
//Lab 9c

import java.util.Random;
import java.util.Scanner;

public class raguilar9
{
	public static void main(String[] args)
	{
		Scanner keyboard = new Scanner(System.in);

		//Generates a random number between 1 and 21
		Random rand = new Random();
		int randNum = rand.nextInt(1, 21);
		
		//DEBUG
		System.out.printf("DEBUG: CORRECT ANSWER: %d\n", randNum);
		
		System.out.printf("Guess my number.\nEnter any number between 1 and 20: ");
		int userNum = keyboard.nextInt();

		while(userNum < 1 || userNum > 20)
		{
			System.out.printf("Oops, I need a number between 1 and 20: ");
			userNum = keyboard.nextInt();
		}

		if(userNum > randNum)
		{
			System.out.printf("Oops, your number was larger than mine, which was %d. \n", randNum);
		}
		else if(userNum < randNum)
		{
			System.out.printf("Oops, your number was smaller than mine, which was %d. \n", randNum);
		}
		else if(userNum == randNum)
		{
			for(int i = 0; i < userNum; i++)
			{
				System.out.printf("You win, you guessed my number: %d!\n", randNum);
			}
		}

	}
}
