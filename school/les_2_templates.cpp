#include <iostream>
#include <string>
#include <vector>

template<typename T>
T add(T a, T b){
    return a + b;
}

int main(){
    int a = 3;
    int b = 5;

    std::string x = "hallo";
    std::string z = "doei";

    std::cout << add(a, b) << std::endl;
    std::cout << add(x, z) << std::endl;
}