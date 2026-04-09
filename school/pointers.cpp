#include <iostream>

int main(){
    int a = 5, b = 10;
    int* ap;
    int* bp;
    std::cout << &a << std::endl;

    bp = &b;
    ap = bp;
    b = 15;

    std::cout << &b << std::endl;
    std::cout << a << std::endl;
    std::cout << *ap << std::endl;

}