#include <iostream>

int playGame();



int ñalculateAnswerScore()
{
	int sum{};

	sum = playGame();
	if (sum == 50)
	{
		std::cout << "Congratulations, you answered all the questions correctly, you scored 50 points and you get the SUPER PRIZE! (peck on the navel)";
	}
	else
	{
		std::cout << "You got on the quiz: " << sum << "\n\n" << "Congratulations\n\n";
	}
	return 0;
}