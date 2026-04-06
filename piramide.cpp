#include <iostream>
#include <string>

int main(){

    int n;
    std::cout<< "Voer de groote van de piramide:  ";
    std::cin >> n;
    

    for(int i = 0; i < n; i++){
        std::string sterren(i, '*');
        std:: cout << sterren << std::endl;
    }

     for(int j = n; j <= n; j--){
        std::string sterren(j, '*');
        std:: cout << sterren << std::endl;

        if(j <= 0){
            break;
        }
    }

    return 0;
}