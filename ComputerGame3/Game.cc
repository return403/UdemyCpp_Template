
#include <cstdint>
#include <iostream>
#include "Game.h"

void game()
{

    static std::uint32_t player = START;


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
