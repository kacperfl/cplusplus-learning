#include <iostream>
#include <array>
#include <vector>
#include <string>

namespace BunchOfVectors{
    std::vector<int> nums_1 {1,2,3,4,5,6,7,8,9,10};
    std::vector<int> nums_2 {2,4,6,8,10,12,14,16,18,20};
}


std::vector<int> print_from_vector(const std::vector<int>& vector_1, const std::vector<int>& vector_2){
    std::cout << "Alle values van de eerste vector:\n";
    for(int value : vector_1){
        std::cout << value << std::endl;
    }
    std::cout << '\n';


    std::cout << "Alle values van de tweede vector:\n";
    for(int num : vector_2){
        std::cout << num << std::endl;
    }

}


int main(){
    std::vector<int> increment_vec = BunchOfVectors::nums_1;
    std::vector<int> two_stap_vec = BunchOfVectors::nums_2;

    print_from_vector(increment_vec, two_stap_vec);

}