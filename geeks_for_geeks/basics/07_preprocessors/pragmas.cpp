// GCC compilers don't recognize pragams

#include <bits/stdc++.h>

void startup_fn();
void exit_fn();

#pragma startup startup_fn
#pragma exit exit_fn

void startup_fn()
{
    std::cout << "Starting up..." << std::endl;
}

void exit_fn()
{
    std::cout << "Exiting!" << std::endl;
}

int main()
{
    void startup_fn();
    void exit_fn();
    std::cout << "Main Function" << std::endl;
    return 0;
}
