#include <iostream>

#include "check_value.h"
#include "high_scores.h"


int checkValue(const int target_value) {

	std::string user_name = getName();
	int current_value = 0;
	int attempts = 0;
	
	std::cout << "Enter your guess:" << std::endl;

	do {
		std::cin >> current_value;
		attempts++;

		if (current_value > target_value) {
			std::cout << "less than " << current_value << std::endl;
		}
		else if (current_value < target_value) {
			std::cout << "greater than " << current_value << std::endl;
		}
		else {
			std::cout << "you win!" << std::endl;
			std::cout << "Attemps: " << attempts << std::endl;
			setScore(user_name, attempts);
			break;
		}

	} while(true);

	getHighScores();
	return 0;
}