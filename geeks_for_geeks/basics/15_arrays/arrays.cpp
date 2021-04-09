#include<iostream>

int main()
{
    int arr1[10];
    std::cout << "Array 1 size: " << sizeof(arr1)/sizeof(int) << std::endl;

    int arr2 [] = {12, 22, 32, 42};
    std::cout << "Array 1 size: " << sizeof(arr2)/sizeof(int) << std::endl;
    // std::cout << "Array contents: " << arr2 << std::endl;

}
