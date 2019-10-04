#include "Game.h"
#include "windows.h"

using namespace std;

string initGame()
{
	auto word{ ""s };
	
	cout << "Greeting & welcome";
	menuMessage();	
	word = WORDS_TO_GUESS[generateRandomIndex()];
	printHowManyLettersHasTheWord(word);
	return word;
}

int generateRandomIndex()
{
	auto randomDevice = random_device();
	auto randomGenerator = mt19937{ randomDevice() };
	auto randomDistribution = uniform_int_distribution<int>(1, 6);

	return randomDistribution(randomGenerator);
}

void menuMessage()
{
	auto menuMessage{ "Do you wanna play a game ?\n1. GAME\n2. QUIT" };

	cout << menuMessage << endl;
}

void printHowManyLettersHasTheWord(string &word)
{
	for (auto i = 0; i < word.length(); i++)
	{
		cout << "_";
	}
}
void printPlayerAdvancement(string &playerAdvancement)
{
	cout << playerAdvancement;
}

void printPlayerLife(int &tries)
{
	DRAWS_HANGMAN[tries];
}