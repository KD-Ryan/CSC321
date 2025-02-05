import java.util.Scanner;

public class raguilar4
{
	public static void main(String[] args)
	{
		int userSelect = 0;

		Scanner keyInput = new Scanner(System.in);

		System.out.println("Please select any of these choices: ");
		System.out.println("1. Bagel\n2. Sandwich\n3. Donut\n4. Smoothie\n");

		userSelect = keyInput.nextInt();

		if(userSelect == 1)
		{
			System.out.println("You have selected option 1: Bagel.");
		}
		else if(userSelect == 2)
		{
			System.out.println("You have selected option 2: Sandwich.");
		}
		else if(userSelect == 3)
		{
			System.out.println("You have selected option 3: Donut.");
		}
		else if(userSelect == 4)
		{
			System.out.println("You have selected option 4: Smoothie.");
		}
		else
		{
			System.out.println("Error: Invalid choice detected.");
			System.exit(0); //For a soft close incase this is considered an error.
		}
	}
}

