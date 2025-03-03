#include <iostream>

#include "check_value.h"
#include "random_value.h"
#include "argument.h"


int guessNumber(const int max)
{

    int guess_value = random_value(max);
    return checkValue(guess_value);
    
}

int main (int argc, char** argv)
{
    std::cout << "-=Guess The Number Game=-" << std::endl;

    int arg = argument(argc, argv);
    if (arg > 0)
    {
        guessNumber(arg);
    }

    return 0;
}
