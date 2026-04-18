#include "iostream"



void opdracht_1(){
    int arr[5]  {10, 20, 30, 40, 50};
    int* p = arr;

    for(size_t i = 0; i < sizeof(arr) / sizeof(*p); i++){
        std::cout<< *(p + i) << '\n';
    }
}

int opdracht_2(int *arr, int size){
    int sum = 0;
    int *p = arr;

    for(int i = 0; i < size; i++){
        sum += *(p + i);
    }

    return sum;
}

int opdracht_3(int *arr, int size){
    int *p = arr;  // arr[0]
    int biggest_value = *p;

    for(int i = 1; i < size; i++){
        if(*(p + i) > biggest_value){
            biggest_value = *(p + i);
        }
    }
    return biggest_value;
}

void extra(int *arr, int size){
    int *p = arr;
    for(int i = 0; i < size; i++){
        *(p + i) *= 2;
    }
}

int main(){
    int arr[7] = {4,7,12,45,84,112,145};

    opdracht_1();
    std::cout<< opdracht_2(arr, 7) << std::endl;
    std::cout<< opdracht_3(arr, 7) << std::endl;
    extra(arr, 7);
}