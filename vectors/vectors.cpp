#include <iostream>
#include <string>
#include <vector>

std::vector<int> lijst_checker(){
    std::vector<int> namen = {1,2,3,4,5,6,7,8,9,10};
    return namen;
}



int main(){
    std::vector<int> nums = lijst_checker();
    // std::vector<int> new_num = {};

    for(size_t i = 0; i < nums.size(); i++){
        if(nums[i] % 2 == 0){

            std:: cout << nums[i] << " - Is een even getal\n";
        }
        else{
            std::cout << nums[i] << " - Is een oneven getal\n";
        }
    }
}