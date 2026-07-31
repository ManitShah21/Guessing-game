#include <iostream>
#include <random>

int main()  // this program prompts the user to guess the number which was outputted by the computer via the mt19937 algorithm
{
	std::cout << "GUESS THE NUMBER" << '\n';
	std::cout << "----------------" << '\n';
	std::cout << '\n';
	
	// Declaration
	int userGuess{};
	char playAgain{ 'y' };

	// generating a random number

	std::random_device rd;  // asks computer for a truly random number (rd object)
	std::mt19937 gen(rd());  // plugs rd into an engine "gen" which runs on the mt19937 algorithm
	std::uniform_int_distribution<int>distrib(1, 10);  // converts the raw binary data into readable format


	while (playAgain == 'y')
	{


		int randomNumber{ distrib(gen) }; // stores a random number from 1-10 in a variable

		

		std::cout << "Take a guess (between 1-10): ";
		std::cin >> userGuess;

		if (userGuess > 10 || userGuess < 1)  // if userGuess is out of bounds
		{
			std::cout << "Enter a number between 1 and 10." << '\n';
	
		}
		else if (userGuess == randomNumber) // if the user wins
		{
			std::cout << "YOU WON!!!!" << '\n';
			

		}
		else  // if the user loses
		{
			std::cout << "You lose!" << '\n';
			std::cout << "The number was " << randomNumber << '\n';

		}

		// Replay system
		std::cout << "Play again? (y/n): ";
		std::cin >> playAgain;
		std::cout << "***********************************************" << '\n';

		while (playAgain != 'n' && playAgain != 'y')
		{
			std::cout << "Please enter yes or no (y/n)." << '\n';
			std::cout << "Try again? (y/n)" << '\n';
			std::cin >> playAgain;
		}
	}

	std::cout << "Thanks for playing!" << '\n';


	return 0;


}


