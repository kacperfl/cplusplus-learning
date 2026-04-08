#include <iostream>
#include <string>

namespace RandomStrings{
    std::string one_string {"Het is vandaag een zonnig maar lang dag."};
    std::string two_string {"Het is vandaag een zonnig maar lang dag."};
}

void string_checker(const std::string& string_one, const std::string& string_two){
    bool diffrence {false};
    int index_diffrence;
    int min_length = std::min(string_one.length(), string_two.length()); // zodat ik de menimale "zelfde" string lengte in loop kan vergelijken als twee strings niet even groot zijn


    for(int i = 0; i < min_length; i++){
        if(string_one[i] != string_two[i]){
            index_diffrence = i;
            diffrence = true;
            std::cout << "De verschil tussen de strings zit op index: " << index_diffrence << std::endl;
            break;
        }
    }

    if(diffrence == false){
        std::cout << "Er is geen verschil tussen de strings";
    }
}

int main(){
    std::string text_one {RandomStrings::one_string};
    std::string text_two {RandomStrings::two_string};

    string_checker(text_one, text_two);
}