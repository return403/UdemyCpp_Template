#include <cstdint>
#include <iostream>

int main()
{
    std::uint32_t LEN_X = 75;
    std::uint32_t START = 0;
    std::uint32_t GOAL = LEN_X - 1;
    std::uint32_t player = 0;

    char LEFT1 = 'a';
    char LEFT2 = 'A';
    char RIGHT1 = 'd';
    char RIGHT2 = 'D';
    char move;

    while(true)
    {
        if(player == GOAL)
        {
            break;
        }

        std::cin >> move;

        for(std::uint32_t i = START; i < LEN_X; i++)
        {
            if(i == player)
            {
                std::cout << "P";
            }
            else if (i == START || i == GOAL)
            {
                std::cout << "|";
            }
            else
            {
                std::cout << ".";
            }
        }

        std::cout << "\n";

        if ((LEFT1 == move || LEFT2 == move) && player > START)
        {
            player--;
        }
        else if ((RIGHT1 == move || RIGHT2 == move) && player < GOAL)
        {
            player++;
        }
    }
}
