#include <iostream>

//macro definition
#define LIMIT 12

int main()
{
    for(int i = 0; i < LIMIT; i++)
    {
        std::cout << i << std::endl;
    }
    return 0;
}

#undef LIMIT

