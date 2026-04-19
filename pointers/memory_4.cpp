#include <iostream>

int* create_array(int size){

    int *arr = new int [size];

    for(int i = 0; i < size; i++){
        arr[i] = i * 2;
    }
    return arr;
}

int main(){
    int size = 5;
    int *data = create_array(size);

    for(int i = 0; i < size; i++){
        std::cout << data[i] << " ";
    }

    delete[] data;
}