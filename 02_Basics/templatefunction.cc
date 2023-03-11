#include "cstdint"
#include "iostream"

template <typename T>
T max(T a, T b)
{
    return a > b ? a : b;
}

template <typename T, typename U>
T max(T a, U b)
{
    return a > b ? a : b;
}

int main()
{
    int a = 5;
    int b = 10;
    long long c = 4;
    long long d = 7;
    std::cout << max (a, b) << "\n";
    std::cout << max (c, d) << "\n";
    std::cout << max (d, a) << "\n";
    std::cout << max <long long> (a, d) << "\n";
    return 0;
}
