#include <iostream>

// 1.) User-Input: unsigned integer number
// 2.) Compute if the number is a prime number
// 3.) Print out the result

// Prime Number: Only divisble by itself and 1 with a remainder of 0

int main()
{
    std::uint32_t number;

    std::cout<< "please enter the number: ";
    std::cin >> number;

    for(std::uint32_t i = 2; i < number; ++i)
    {
        if(number%i == 0)
        {
            std::cout <<"its not a prime"<< number%i;
            return 0;
        }
        std::cout << number << " is a prime.";
    }

    return 0;
}
