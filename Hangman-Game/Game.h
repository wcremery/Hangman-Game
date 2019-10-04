#pragma once

#include <string>
#include <iostream>
#include <random>

#include "Enums.h"
#include "Constants.h"

// randomly select a word in the array
std::string initGame();
// generate random index
int generateRandomIndex();
// print welcome message and prompt player
void menuMessage();
// print the player to enter a letter or the word
void wordOrLetterMessage();
// print how many letters composed the word
void printHowManyLettersHasTheWord(std::string &word);
// print how many letter the player found
void printPlayerAdvancement(std::string &playerAdvancement);
// draw the hangman to know how many tries the player has
void printPlayerLife();
