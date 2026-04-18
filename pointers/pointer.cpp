#include "iostream"

namespace PointerVarNames{
    int basic_int = 9;

    int value_1 = 5;
    int value_2 = 10;
}


void basic_pointer(){
    int a = 14;
    int* ptr_a = &a;

    *ptr_a = 20;
    std::cout << "New value of a is: " << *ptr_a << '\n';
}


int change_value(int* x){
    return *x = *x * 3;
}

void swap_values(int *a, int *b){
    int a_ptr_value = *a;
    int b_ptr_value = *b;
    *a = b_ptr_value;
    *b = a_ptr_value;
    std::cout << "a = " << *a << " b = " << *b << std::endl;
}
int ptr_value_check(int *a){
    return *a = ((*a % 2 == 0) ? *a * 2 : *a+1);
}


int main(){
    int x = PointerVarNames::basic_int;
    int a = PointerVarNames::value_1;
    int b = PointerVarNames::value_2;
    int bigger_value = change_value(&x);
    
    basic_pointer();

    std:: cout << "De waarden van a is nu: " << bigger_value << '\n';
    std::cout << "a = " << a << " b = " << b << std::endl;
    swap_values(&a, &b);
    std:: cout << ptr_value_check(&b) << '\n';

}