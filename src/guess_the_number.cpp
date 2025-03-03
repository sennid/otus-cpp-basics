#include <iostream>

#include "check_value.h"
#include "random_value.h"


int guessNumber() {

    int guess_value = random_value(100);
    return checkValue(guess_value);
    
}

int main ()
{
    std::cout << "-=Guess The Number Game=-" << std::endl;
    guessNumber();
}
