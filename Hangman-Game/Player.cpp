#include "Player.h"

using namespace std;

string letterProposal()
{
	auto playerProposal{ ""s };

	do
	{
		cout << "Which letter do you propose ? (Enter only one letter between a to z)" << endl;
		cin >> playerProposal;
	} while ((playerProposal.length() != 1) || (playerProposal[0] < 'a' || playerProposal[0] > 'z'));

	return playerProposal;

}
string wordProposal(int& wordSize)
{
	auto playerProposal{ ""s };

	do
	{
		cout << "What is the word ? (The word has to be composed of " << wordSize << " letters)" << endl;
		cin >> playerProposal;
	} while ((playerProposal.length() != wordSize));

	return playerProposal;
}

MenuChoices gameMenu()
{
	auto playerChoice{ 0 };
	cin >> playerChoice;
	switch (playerChoice)
	{
	case 1:
		return MenuChoices::PLAY;
	case 2:
		return MenuChoices::QUIT;
	default:
		cout << "Enter 1 to play or 2 to quit !" << endl;
		gameMenu();
	}
}

PlayerChoices wordOrLetter()
{
	auto playerChoice{ 0 };
	cin >> playerChoice;
	switch (playerChoice)
	{
	case 1:
		return PlayerChoices::WORD_PROPOSAL;
	case 2:
		return PlayerChoices::LETTER_PROPOSAL;
	default:
		cout << "Enter 1 to enter the complete word or 2 to propose a letter !" << endl;
		gameMenu();
	}
}