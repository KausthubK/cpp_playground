#include<iostream>

// Must be int main to comply with legal C++ standards - void main is rejected by all good compilers.
int main()
{
    std::cout << "Hello, World!" << std::endl;
    // using std::endl flushes output buffer '\n' does not (cite: https://www.geeksforgeeks.org/endl-vs-n-in-cpp/)
    
    return 0;
}
