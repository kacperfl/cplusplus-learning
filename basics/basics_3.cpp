#include <iostream>

void checker(int value){
        switch (value){
        case 63:
         std:: cout << "Dit is nummer 63";
         break; // je moet break gebruiken om het niet door te laten gaan!

        case 64:
         std:: cout << "Dit is nummer 64";
         break;

        case 65:
         std:: cout << "Dit is nummer 65";
         break;

         case 66:
         std:: cout << "Dit is nummer 66";
         break;

         case 67:
         std:: cout << "Dit is nummer 67";
         break;

         default: // het is soort van else
         std:: cout << "Er zijn geen juiste nummers gevonden!";
    }
}

int main(){
    int waarden = 35;
    checker(waarden);

}