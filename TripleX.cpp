#include <iostream>

void PrintIntroduction()
{
	//Print intro statements
	std::cout << "You are a secret agent breaking into a secure server room.\n";
	std::cout << "You need to enter the correct codes to continue...\n\n";
}

void PlayGame()
{
	PrintIntroduction();

	const int CodeA = 4;
	const int CodeB = 3;
	const int CodeC = 2;
	int GuessA;
	int GuessB;
	int GuessC;
	int GuessSum;
	int GuessProduct;


	const int CodeSum = CodeA + CodeB + CodeC;
	const int CodeProduct = CodeA * CodeB * CodeC;

	// Print sum and product
	std::cout << "There are 3 numbers in the code.\n";
	std::cout << "The codes add up to: " << CodeSum << std::endl;
	std::cout << "The codes multiply to give: " << CodeProduct << std::endl;

	std::cin >> GuessA >> GuessB >> GuessC;

	GuessSum = GuessA + GuessB + GuessC;
	GuessProduct = GuessA * GuessB * GuessC;

	if (GuessSum == CodeSum && GuessProduct == CodeProduct)
	{
		std::cout << "You Win!";
	}
	else
	{
		std::cout << "You Lose!";
	}
}

int main()
{
	PlayGame();
	return 0;
}