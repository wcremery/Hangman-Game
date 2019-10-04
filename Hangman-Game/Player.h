#pragma once

#include <iostream>
#include <string>

#include "Enums.h"

// ask the player to enter a letter
std::string letterProposal();
// ask the player to enter a word
std::string wordProposal(int &wordSize);
// ask the player to make a choice in the menu
MenuChoices gameMenu();
// ask the player to choose between enter a letter or the word
PlayerChoices wordOrLetter();