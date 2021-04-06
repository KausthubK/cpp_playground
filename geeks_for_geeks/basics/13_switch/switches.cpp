#include<iostream>

int GLOBAL_VARIABLE = 3;

int main()
{
    int a = 1, b = 2, c = 3, d = 4;

    // if statement approach

    if (GLOBAL_VARIABLE == a)
    {
        std::cout << "Equals 1!" << std::endl;
    }
    else if (GLOBAL_VARIABLE == b)
    {
        std::cout << "Equals 2!" << std::endl;
    }
    else if (GLOBAL_VARIABLE == c)
    {
        std::cout << "Equals 3!" << std::endl;
    }
    else if (GLOBAL_VARIABLE == c)
    {
        std::cout << "Equals 4!" << std::endl;
    }
    else
    {
        std::cout << "Greater than 4!" << std::endl;
    }

    // switch statement approach

    switch(GLOBAL_VARIABLE)
    {
        case 1: std::cout << "Equals 1!" << std::endl;
            break;
        case 2: std::cout << "Equals 2!" << std::endl;
            break;
        case 3: std::cout << "Equals 3!" << std::endl;
            break;
        case 4: std::cout << "Equals 4!" << std::endl;
            break;
        default: std::cout << "Greater than 4!" << std::endl;
            break;
    }


}