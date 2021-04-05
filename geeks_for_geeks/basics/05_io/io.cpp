#include<iostream>

int ask_for_age()
{
    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;
    std::cout << "Your age is: " << age << std::endl;
    return age;
}

int main()
{
    char sample [] = "Geeks for Geeks";
    std::cout << sample << " - A computer science portal for geeks!" << std::endl;
    int returned_age = ask_for_age();
    std::cout << "Returned age: " << returned_age << std::endl;
    std::clog << "Age: " << returned_age << std::endl;
    if (returned_age < 18)
    {
        std::cerr << "ERROR: Under 18" << std::endl;
    }
    return 0;
}
