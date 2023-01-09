#include <iostream>
#include <string>

void greeting();

int playGame()
{
	greeting();

	std::cout << "First question: How much is 2 + 2 * 2 =?\nAnswer options:\na: 4;\nb: 6;\nc: 8;\nd: 10;\n";
	std::cout << "Your answer:";
	int answerScore1{};
	std::string answer1{};
	std::cin >> answer1;

	if (answer1 == "b")
	{
		answerScore1 = 10;
	}
	else
	{
		answerScore1 = 0;
	}

	if (answerScore1 == 10)
	{
		std::cout << "congratulations, that's the right answer!\n\n";
	}
	else
	{
		std::cout << "unfortunately this is not the right answer\n\n";
	}

	std::cout << "Second question: Putin it's.... ?\nAnswer options:\na: scum;\nb: asshole;\nc: dickhead;\nd: all of the above;\n";
	std::cout << "Your answer:";
	int answerScore2{};
	std::string answer2{};
	std::cin >> answer2;

	if (answer2 == "d")
	{
		answerScore2 = 10;
	}
	else
	{
		answerScore2 = 0;
	}

	if (answerScore2 == 10)
	{
		std::cout << "congratulations, that's the right answer!\n\n";
	}
	else
	{
		std::cout << "is just one of its properties\n\n";
	}

	std::cout << "Third question: 3 + 3 = ...  ?\nAnswer options:\na: 2;\nb: 6;\nc: 1;\nd: string;\n";
	std::cout << "Your answer:";
	int answerScore3{};
	std::string answer3{};
	std::cin >> answer3;

	if (answer3 == "b")
	{
		answerScore3 = 10;
	}
	else
	{
		answerScore3 = 0;
	}

	if (answerScore3 == 10)
	{
		std::cout << "congratulations, that's the right answer!\n\n";
	}
	else
	{
		std::cout << "unfortunately this is not the right answer\n\n";
	}

	int totalScore = answerScore1 + answerScore2 + answerScore3;
	if (totalScore == 0)
	{
		std::cout << "You lose!";
		return 0;
	}


	std::cout << "Question four: The capital of Bulgaria is...  ?\nAnswer options:\na: Sofia;\nb: Luda;\nc: Maria;\nd: Gregory;\n";
	std::cout << "Your answer:";
	int answerScore4{};
	std::string answer4{};
	std::cin >> answer4;

	if (answer4 == "a")
	{
		answerScore4 = 10;
	}
	else
	{
		answerScore4 = 0;
	}

	if (answerScore4 == 10)
	{
		std::cout << "congratulations, that's the right answer!\n\n";
	}
	else
	{
		std::cout << "unfortunately this is not the right answer\n\n";
	}

	if ((totalScore + answerScore4) < 20)
	{
		std::cout << "You lose!";
		return 0;
	}


	std::cout << "Last question: 14 * 231 = ?\nAnswer options:\na: 20443;\nb: 11550;\nc: 3234;\nd: there is no right answer;\n";
	std::cout << "Your answer:";
	int answerScore5{};
	std::string answer5{};
	std::cin >> answer5;

	if (answer5 == "c")
	{
		answerScore5 = 10;
	}
	else
	{
		answerScore5 = 0;
	}

	if (answerScore5 == 10)
	{
		std::cout << "congratulations, that's the right answer!\n\n";
	}
	else
	{
		std::cout << "unfortunately this is not the right answer\n\n";
	}

	if ((totalScore + answerScore4 + answerScore5) < 30)
	{
		std::cout << "You lose!\n\n";
		return 0;
	}

	totalScore = answerScore1 + answerScore2 + answerScore3 + answerScore4 + answerScore5;

	return totalScore;
}
