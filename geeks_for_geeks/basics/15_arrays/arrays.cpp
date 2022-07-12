#include <iostream>
#include <iterator>

#define BUFFER_SIZE 3

int main()
{
    int arr1[10];
    std::cout << "Array 1 size: " << sizeof(arr1)/sizeof(int) << std::endl;

    const int n = 7;
    int arr2[n]; // n must be const int or a preproc definition
    std::cout << "Array 2 size: " << sizeof(arr2)/sizeof(int) << std::endl;

    int arr3[BUFFER_SIZE]; // n must be const int or a preproc definition
    std::cout << "Array 3 size: " << sizeof(arr3)/sizeof(int) << std::endl;

    int arr4 [] = {12, 22, 32, 42};
    std::cout << "Array 4 size: " << sizeof(arr4)/sizeof(int) << std::endl;

    int arr5 [n] = {12, 22, 32, 42};
    std::cout << "Array 5 size: " << sizeof(arr5)/sizeof(int) << std::endl;
    std::cout << "Array 5 address: " << arr5 << std::endl;
    std::cout << "Array 5 contents: ";
    std::copy(arr5, arr5+n, std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;
    std::cout << "Array 5 element 3: " << arr5[2] << std::endl;

    /* No array out of bounds exception when accessing
     nothing protecting us from doing something like this
    */
    std::cout << "Array 5 element 3: " << arr5[250] << std::endl;

    for(int i=0; i < n; i++)
    {
        std::cout << "arr5[" << i << "] | Addr: " << &arr5[i] << " | Cont: " << arr5[i] << std::endl;
    }
    std::cout << "END" << std::endl;

    return 0;
}
