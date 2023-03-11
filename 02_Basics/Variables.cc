#include <cstdint>
#include <iostream>


int main()
{
    std::uint8_t i1 = 1;
    std::uint16_t j1 = 1;
    std::uint32_t k1 = 1;
    std::uint64_t l1 = 1;

    std::int8_t i2 = 1;
    std::int16_t j2 = 1;
    std::int32_t k2 = 1;
    std::int64_t l2 = 1;


    float my_value1 = 10;
    float my_value2 = 5;

    float my_result1 = my_value2 / my_value1;

    char letter_a = 'A';  //dez=65 hex = 41
    std::cout << letter_a << " = " << (int)letter_a << "\n";

    char letter_a2 = letter_a + 6;

    std::cout << letter_a2 << " = " << (int)letter_a2 << "\n";

    std::cout << "division: " << my_result1 << "\n";


    char my_value5;
    char my_value6;

    std::cout << "please enter the first number: \n";
    std::cin >> my_value5;
    std::cout << "please enter the second number: \n";
    std::cin >> my_value6;
    float my_result56 = my_value5 + my_value6;
    std::cout << "result is: " << my_result56 << "\n";

    return 0;
}
