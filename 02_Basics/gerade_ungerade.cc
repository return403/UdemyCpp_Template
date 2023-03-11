#include <cstdint>
#include <iostream>

std::int32_t input()
{
    std::int32_t number;
    std::cout << "please enter ur number: "<< std::endl;
    std::cin >> number;

    return number;
}

bool modulo(std::int32_t number)
{
    return number%2 == 0;
}

void print_bool_value(bool value)
{
    std::cout << std::boolalpha << value;
}

int main()
{
    print_bool_value(modulo(input()));
    return 0;
}
