#include "iostream"

int main(){
    int value = 10;
    int size = 5;

    int* arr = new int[size];
    for(int i = 0; i < size; i++){
        *(arr + i) = value * (i +1);
        std::cout<< arr[i] << std::endl;
    }
    delete [] arr;
}