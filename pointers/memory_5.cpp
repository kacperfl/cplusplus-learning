#include <iostream>

int main() {
    int a = 5;
    // Ampersand v1: in types, "reference naar"
    int& b = a;
    a = 100;
    std::cout << b << std::endl; // 100
    b++;
    std::cout << a << std::endl; // 101
    // Ampersand v2: bij waarden, "haal adres op"
    std::cout << "&a: " << &a << std::endl
    << "&b: " << &b;
    // Twee keer exact hetzelfde adres
} 