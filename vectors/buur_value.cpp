#include <iostream>
#include <vector>

int vector_checker(std::vector<int>& vector_1){
    int biggest_rest_num = 0;
    for (int i = 0; i < (int)vector_1.size() - 1; i++) {
        int huidige = vector_1[i];
        int buur = vector_1[i + 1];
        
        if(huidige - buur > biggest_rest_num){
            biggest_rest_num = huidige - buur;
        }
    }
    return biggest_rest_num;

}

int main(){

    std::vector<int> vector_of_nums {2,5,7,2,8,6,9,1,3,5};
    int biggest_diff = vector_checker(vector_of_nums);

    std::cout << "De grootste verschil is: " << biggest_diff;
}