#pragma once

#include <string>
#include <array>

// size of the array containing words
const auto NB_WORDS{ 10 };
// The array containing words that the player have to guess
const std::array<std::string, NB_WORDS> WORDS_TO_GUESS{ "greetings", "welcome", "hangman", "game", "learn", "programmation", "console", "string", "interaction", "template" };
// The number of mistakes the player can do before lose
const auto TRIES_MAX{ 11 };
// The array containing draws of the hangman
const std::array<std::string, TRIES_MAX> DRAWS_HANGMAN{
	R"(        
	-----------)",
	R"(  
		 |       
		 |        
		 |         
		 |        
	-----------)",
	R"(  ----------
		 |       
		 |        
		 |         
		 |        
	-----------)",
	R"(  ----------
		 | /       
		 |/         
		 |         
		 |        
	-----------)",
	R"(  ----------|
		 | /       |
		 |/          
		 |         
		 |        
	-----------)",
	R"(  ----------|
		 | /       |
		 |/        O  
		 |         
		 |        
	-----------)",
	R"(  ----------|
		 | /       |
		 |/        O  
		 |         |
		 |        
	-----------)",
	R"(  ----------|
		 | /       |
		 |/        O  
		 |         |\
		 |        
	-----------)",
	R"(  ----------|
		 | /       |
		 |/        O  
		 |        /|\
		 |         
	-----------)",
	R"(  ----------|
		 | /       |
		 |/        O  
		 |        /|\
		 |          \ 
	-----------)",
	R"(  ----------|
		 | /       |
		 |/        O  
		 |        /|\
		 |        / \ 
	-----------)"};