#pragma once

#include <iostream>
#include <string>

#include "Enums.h"

// ask the player to enter a letter
string letterProposal();
// ask the player to enter a word
string wordProposal(int& wordSize);
// ask the player to make a choice in the menu
MenuChoices gameMenu();