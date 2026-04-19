#include <iostream>

struct Persoon{
    int age;
};


int main(){
    Persoon p;
    p.age = 21;

    Persoon* ptr_p = new Persoon;
    int new_age = ptr_p -> age = 22;

    std::cout << p.age << '\n';
    std::cout << new_age;

    delete ptr_p;
}

