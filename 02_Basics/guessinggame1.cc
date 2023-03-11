#include "cstdint"
#include "iostream"


bool gamestate;
bool game();

int main()
{


    while(gamestate == false)
    {
        gamestate = game();
    };
    return 0;
};

bool game()
{
    std::int16_t guess;
    std::int16_t number = 6;
    std::cout << "Guess the right number between 0 and 10!\n" << "Your guess: ";
    std::cin >> guess;

    if(guess >= 0 && guess <= 10)
    {
        if(guess == number)
        {
            std::cout << "You won! The number was indeed " << number << ".\n";
            return 1;
        }
        else if(guess%2 == 0)
        {
            std::cout << "You won the wooden spoon!!! \n";
        }
        else
        {
            std::cout << "Wrong Guess!!!\n";
        };
    }
    else
    {
        std::cout << "Number is not between 1 and 10!!!\n";
    };
    return 0;
};
