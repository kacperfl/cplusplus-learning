#include "iostream"
#include "cstdlib"

int find_lowest_value(int *arr, size_t size){
    for(size_t i = 0; i < size; i++){
        *(arr + i) = rand() % 100;
        std::cout << arr[i] << ' ';
    }
    std::cout << '\n';

    int lowest_value = arr[0];

    for(size_t i = 1; i < size; i++){
        if(*(arr + i) < lowest_value){
            lowest_value = *(arr + i);
        }
    }
    return lowest_value;

}


int main(){
    srand(time(0));
    size_t size = 10;
    int *arr = new int[size];

    int small_val = find_lowest_value(arr, size);

    std::cout << "lowest number of random generation is: " << small_val; 
    delete [] arr;
}