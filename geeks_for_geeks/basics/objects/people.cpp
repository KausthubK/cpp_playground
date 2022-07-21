#include <bits/stdc++.h>

class Person
{
    private:
    std::string name;
    int secret_id;

    public:
    Person()
    {
        std::cout << "Preferred Constructor called" << std::endl;
        this->name = "name";
        this->secret_id = 1*314;
    }

    Person(std::string name)
    {
        std::cout << "Preferred Constructor called" << std::endl;
        this->name = name;
    }

    std::string get_name(){
        return name;
    }

    void print_name(){
        std::cout << name << std::endl;
    }
};

int main()
{
    std::vector<Person> people(5);

    for(auto p: people)
    {
        p.print_name();
    }

    Person p1;
    p1.print_name();
    return 0;
}