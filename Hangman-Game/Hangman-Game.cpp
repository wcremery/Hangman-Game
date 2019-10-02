#include <iostream>
#include <string>
#include <array>
#include <random>

#include "Constants.h"

using namespace std;

int main()
{
	array<string, NB_WORDS> wordsToGuess{ "greetings", "welcome", "hangman", "game", "learn", "programmation", "console", "string", "interaction", "template" };
	random_device randomDevice;
	auto randomGenerator = mt19937{ randomDevice() };
	auto randomDistribution = uniform_int_distribution<int>(1, 6);
	auto wordToFind = wordsToGuess[randomDistribution(randomGenerator)];
	auto playerAdvancement{ ""s };
	string playerProposal;	
	for (auto i = 0; i < wordToFind.length(); i++)
	{
		playerAdvancement += "_";
	}
	
	do
	{
		do
		{
			cout << playerAdvancement << endl;
			cout << "Your proposition ? " << endl;
			cin >> playerProposal;
		} while ((playerProposal.length() != 1) || (playerProposal[0] < 'a' || playerProposal[0] > 'z'));
		
		for (auto i = 0; i < wordToFind.length(); i++)
		{
			if (playerProposal[0] == wordToFind[i]) 
			{				
				playerAdvancement[i] = wordToFind[i];
			}
		}
	} while (wordToFind != playerAdvancement);

	return EXIT_SUCCESS;
}