#include <bits/stdc++.h>

class Person
{
    private:
    std::string name;
    int secret_id;
    
    public:
    // variables
    int public_id;

    // constructors
    Person()
    {
        std::cout << "Default Constructor called" << std::endl;
        name = "???";
        secret_id = -1;
        public_id = -1;
    }

    Person(int id, std::string name)
    {
        std::cout << "Preferred Constructor called" << std::endl;
        this->name = name;
        this->secret_id = id*314;
        this->public_id = id;
    }

    // destructors
    ~Person()
    {
        std::cout << "Default Destructor called" << std::endl;
    }

    // methods
    int get_public_id(){
        return public_id;
    }

    int get_secret_id(){
        return secret_id;
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
    Person p1; // implicit construction with declaration
    std::cout << p1.public_id << std::endl;
    std::cout << p1.get_public_id() << std::endl;
    p1.public_id = 10;
    std::cout << p1.public_id << std::endl;
    std::cout << p1.get_public_id() << std::endl;
    p1.print_name();

    Person p2 = Person(); // explicit construction with declaration
    p2.print_name();

    Person p3 = Person(2, "Kausthub");
    p3.print_name();
    std::cout << p3.get_public_id() << std::endl;
    std::cout << p3.get_secret_id() << std::endl;

    return 0;
}