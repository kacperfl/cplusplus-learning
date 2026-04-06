#include <iostream>
#include <vector>
#include <string>


namespace TekstVerschil{
    std::vector<int> v1 {1, 3, 5, 2, 6, 8, 9, 11, 15, 19, 20};
    std::vector<int> v2 {2, 3, 4, 5, 6, 7, 9, 10, 11, 15, 22};
}

void same_values(const std::vector<int>& v){
    std::cout << "Dit zijn allemaal getalen die het zelfde waren in beide vectors!" << std::endl;

    for(int value : v){
        std::cout << value << " - ";
    }
}

void bigger_then_values(const std::vector<int>& v1){
    std::cout << "Dit zijn alle waardens waarvan vector 1 values grooter waren dan vector 2!" << std::endl;

    for(int value : v1){
        std::cout << value << " - ";
    }
}

void smaller_then_values(const std::vector<int>& v2){
    std::cout << "Dit zijn de values die kleiner waren dan de values van vector 2 op de zelfde index" << std::endl;

    for(int value : v2){
        std::cout << value << " - ";
    }
}

int main() {
    // vectors ophalen van de namespace
    std::vector<int> nums_1 {TekstVerschil::v1};
    std::vector<int> nums_2 {TekstVerschil::v2};

    // lege vectors aanmaken
    std::vector<int> same_nums;
    std::vector<int> bigger_then;
    std::vector<int> smaller_then;

    // de lege vectors opvullen met de bijbehoorende values
    for(int i {0}; i < nums_1.size(); i++){
        if(nums_1[i] == nums_2[i]){
            same_nums.push_back(nums_1[i]);
        }
        else if (nums_1[i] > nums_2[i]){
            bigger_then.push_back(nums_1[i]);
        }
        else{
            smaller_then.push_back(nums_1[i]);
        }
    }
    // functie aanroepen en resultaten printens
    same_values(same_nums);
    std::cout << std::endl;

    bigger_then_values(bigger_then);
    std::cout << std::endl;
    smaller_then_values(smaller_then);

}