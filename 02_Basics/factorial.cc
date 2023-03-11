#include <iostream>
#include <cstdint>

std::uint64_t factorial(std::uint64_t n)
{
    std::uint64_t r = 1;
    for(std::uint64_t i = 1; i <= n; i++)
    {
        r = i*r;
    }
    return r;
}

std::uint64_t sum(std::uint64_t n)
{
    if (n > 1)
    {
        return n + sum(n-1);
    }
    else
    {
        return n;
    }
}

int main()
{
    std::uint64_t number;
    std::cin >> number;
    std::cout << "factorial result is: " << factorial(number) << std::endl;
    std::cout << "sum result is: " << sum(number) << std::endl;
    return 0;
}
