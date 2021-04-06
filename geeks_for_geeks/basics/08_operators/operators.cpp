#include<iostream>

int main()
{
    int a = 1, b = 2, c = 3, d = 4;

    std::cout << a + b << std::endl;
    std::cout << d - b << std::endl;
    std::cout << d * b << std::endl;
    std::cout << d / b << std::endl;
    std::cout << (d += c) << std::endl;

    return 0;
}