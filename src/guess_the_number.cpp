#include <iostream>

#include "check_value.h"
#include "random_value.h"

int guess_the_number() {

    int guess_value = random_value(100);
    return check_value(guess_value);
    
}

int main ()
{
    std::cout << "-=Guess The Number Game=-" << std::endl;
    guess_the_number();
}
