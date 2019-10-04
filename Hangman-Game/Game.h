#pragma once

#include <string>
#include <iostream>
#include <random>
#include <string_view>

#include "Enums.h"
#include "Constants.h"

// randomly select a word in the array
string initGame();
// generate random index
int generateRandomIndex();
// print welcome message and prompt player
void menuMessage();
// print how many letters composed the word
void printHowManyLettersHasTheWord(string& word);
// print how many letter the player found
void printPlayerAdvancement(string &playerAdvancement);
// draw the hangman to know how many tries the player has
void printPlayerLife();
