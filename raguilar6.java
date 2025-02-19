//Ryan Aguilar
//CSC321
//Lab 6b

public class raguilar6
{
	
	public static void main(String[] args)
	{
		int x = 5;
		int y = 10;
		int answer;

		answer = x + y * x / y - x;
		System.out.println("Answer to first expr = " + answer);

		answer = -x - y / x * y + x;
		System.out.println("Answer to the second expr = " + answer);

		answer = x + y - x / y;
		System.out.println("Answer to the third expr = " + answer);
	}
}
