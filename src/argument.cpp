#include <iostream>
#include <string>

#include "argument.h"
#include "high_scores.h"

int argument(int argc, char** argv) {

	int max_value = 100; 
	if (argc > 1)
	{
		std::string arg1_value{ argv[1] };
		if (arg1_value == "-max") 
		{
			if (argc < 3)
			{
				std::cout << "Wrong usage! The argument '-max' requires some value!" << std::endl;
				return -1;
			}

			max_value = std::stoi(argv[2]);
		}
		else if (arg1_value == "-table")
		{
			getHighScores();
			return -1;
		}
	}
	return max_value;
}