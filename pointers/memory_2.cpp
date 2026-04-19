#include "iostream"


void opdracht_1(){
    int x;
    std::cout<< "Voer de grootte van de array in:  ";
    std::cin >> x;

    int* arr = new int[x];

    for(int i = 0; i < x; i++){
        *(arr + i) = i * 2;
        std::cout << *(arr + i) << std::endl;
    }
    delete [] arr;
}

void opdracht_2(int* arr, size_t size){
    int som = 0;

    for(size_t i = 0; i < size; i++){
        som += *(arr + i);
    }

    std::cout << "De som van de array is: " << som << "\n";

}

auto opdracht_3(size_t size){
    int *arr = new int[size];

    for(size_t i = 1; i < size; i++){
        *(arr + i) = i + 7;
    }
    
    int biggest_val = arr[0];


    for(size_t i = 1; i < size; i++){
        if (*(arr + i) > biggest_val){
            biggest_val = *(arr + i);
        }
    
    }
    delete [] arr;
    return biggest_val;
}


int main(){
    size_t size = 7;
    int *arr = new int[size];

    for(size_t i = 0; i < size; i++){
        *(arr + i) = i + 2;
    }


    opdracht_1();

    opdracht_2(arr, size);
    delete [] arr;

    std::cout << opdracht_3(size) << std::endl;
}