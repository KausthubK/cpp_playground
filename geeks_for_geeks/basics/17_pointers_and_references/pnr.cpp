#include <iostream>

int pointers();
int references();

int main()
{
    int sum_of_errors = 0;
    sum_of_errors += references();
    std::cout << std::endl << std::endl;
    sum_of_errors += pointers();
    if(sum_of_errors == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int references()
{
    std::cout << "References Examples" << std::endl;
    std::cout << "-------------------" << std::endl;
    int x = 10;
    int & ref = x;

    std::cout << "x: " << x << " | ref: " << ref << std::endl;
    x = 20;
    std::cout << "x: " << x << " | ref: " << ref << std::endl;
    ref = 30;
    std::cout << "x: " << x << " | ref: " << ref << std::endl;

    return 0;
}

int pointers()
{
    std::cout << "Pointers Examples" << std::endl;
    std::cout << "-----------------" << std::endl;

    // variables and addresses
    int x = 4;
    std::cout << "Val: " << x << " | Var Addr: " << &x << std::endl;

    // pointer dereferencing
    int * ptr;
    ptr = &x;
    std::cout << "Val: " << *ptr << " | Var Addr: " << ptr << " | Ptr Addr: " << &ptr << std::endl;

    // in arrays
    int v[3] = {10, 100, 200};
    ptr = v; // reassign pointer to int array - type matters here but not structure

    for(int i=0; i < 3; i++)
    {
        // std::cout << "Val: " << *ptr << " | Var Addr: " << ptr << " | Ptr Addr: " << &ptr << std::endl;
        printf("Val: %d | Var Addr: %p | Ptr Addr: %p\n", *ptr, ptr, &ptr);
        ptr++; // increments the pointer
    }

    std::cout << ptr[0] << " " << ptr[1] << " " << ptr[2] << std::endl;
    printf("see? some funky shit happens when you don't take care of your pointers.\n");
    ptr = v; // reassign it to the head of the array
    std::cout << ptr[0] << " " << ptr[1] << " " << ptr[2] << std::endl;
    std::cout << v[0] << " " << v[1] << " " << v[2] << std::endl;
    printf("that's better!\n");

    //2D/nested arrays
    int nums[2][3] = { {16, 12, 20}, {25, 26, 27} };
    std::cout << *nums << std::endl;
    std::cout << **nums << std::endl;
    std::cout << **nums+1 << std::endl; // nope this just adds
    std::cout << *(*nums+1) << std::endl; // this increments
    std::cout << *(*(nums+1)+1) << std::endl; // this increments
    std::cout << nums[1][1] << std::endl; // this increments

    return 0;
}