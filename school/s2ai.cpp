#include "include/s2ai.hpp"
#include <iostream>
#include <stdexcept>

namespace S2AI {

    void pyramid_create(size_t pyramid_size, bool reverse){

        if(pyramid_size <= 0){
            return;
        }

        if(reverse){
            for(int i = 1; i <= pyramid_size; i++){
                std::string star(i, '*');
                std::string spaces(pyramid_size - i, ' ');
                std::cout << spaces << star << std::endl;
            }

            for(int i = pyramid_size - 1; i >= 1; i--){
                std::string star(i, '*');
                std::string spaces(pyramid_size - i, ' ');
                std::cout << spaces << star << std::endl;
            }
        
        }
        else{
             for(int i = 1; i <= pyramid_size; i++){
                std::string star(i, '*');
                std::string spaces(pyramid_size - i, ' '); // hier zijn technisch gezien spaces niet nodig...
                std::cout << star << spaces <<std::endl;
            }

            for(int i = pyramid_size - 1; i >= 1; i--){
                std::string star(i, '*');
                std::string spaces(pyramid_size - i, ' ');
                std::cout << star << spaces <<std::endl;
            }
        }

    }








    int first_difference(const std::string& left, const std::string& right){
        size_t min_length = std::min(left.length(), right.length());

        for(size_t i = 0; i < min_length; i++){
            if(left[i] != right[i]){
                std::cout << "Het eerste verschil zit op index: " << i << std::endl;
                return i;
            }
        }

        
        if(left.length() != right.length()){
            std::cout << "Verschil in lengte op index: " << min_length << std::endl;
            return min_length;
        }

        return -1; // volledig identiek
    }








    size_t count(int n, const std::vector<int>& number_list){
        int couter_num {0};
        for(int value : number_list){ //range based for loop om direct values mee te nemen beetje python styled achtig
            if(value == n){
                couter_num += 1;
            }
        }
        // std::cout << "Getal: " << n << " komt " << couter_num << " voor!" << std::endl; 
        return couter_num;
    }








    float sequential_pairs_biggest_difference(const std::vector<float>& number_list){

        if(number_list.size() < 2){
            return 0.0f;
        }

        float biggest_rest_num = std::abs(number_list[1] - number_list[0]); // het geeft een absolute waarden tereug dus altijd positief

        for(size_t i = 1; i < number_list.size(); i++){
            float diff = std::abs(number_list[i] - number_list[i - 1]);

            if(diff > biggest_rest_num){
                biggest_rest_num = diff;
            }
        }
        return biggest_rest_num;
    }






    bool in_binary_language(const std::vector<int>& number_list){
        size_t counter_of_ones = count(1, number_list);
        size_t counter_of_zero = count(0, number_list);
        int max_acceptable_num = 12;

        for(int value : number_list){
            if(value != 0 && value != 1){
                return false;
            }
        }

        if(counter_of_ones <= counter_of_zero) return false;
        if( counter_of_zero > max_acceptable_num) return false;
        return true;
    }







    float average(const std::vector<float>& values){
        int length_counter = values.size();
        float sum_of_values = 0;
        float avg = 0;

        if(length_counter == 0){
            return avg;
        }

        for(float value : values){
            sum_of_values += value;
        }
        std:: cout << sum_of_values / length_counter << std::endl;
        return avg = (sum_of_values / length_counter);
    }






    float average_of_lists(const std::vector<std::vector<float>>& list_of_lists){
        float sum_of_averages = 0;
        size_t count_of_lists = 0;


        for(const std::vector<float>& list : list_of_lists){
            float sum = 0;

            for(float value : list){
                sum += value;
            }

            float avg = 0;
            if(!list.size() == 0){
                avg = sum / list.size();
        }

        sum_of_averages += avg;
        count_of_lists++; // voegt + 1 toe
    }

    if(count_of_lists == 0) return 0;

    return sum_of_averages / count_of_lists;
    }







    uint16_t fibonacci(uint16_t n){
        if(n > 24){ 
            throw std::overflow_error("Te groot getal AAAAAA"); //rare oplossing om er voor te zorgen dat de recursie niet door en door gaat
        }
        
        if(n == 0) return 0;
        else if(n == 1) return 1;
        else return fibonacci(n-1) + fibonacci(n-2);
    }







    void fizzbuzz(){
        for(size_t i = 1; i <= 100; i++){

            if(i % 5 == 0 && i % 3 == 0){
                std::cout << "fizzbuzz\n";
            }
            else if(i % 3 == 0){
                std::cout << "fizz\n";
            }
            else if(i % 5 == 0){
                std::cout << "buzz\n";
            }

            else{
                std::cout << i << "\n";
            }
        }
    }




    int parsing(){
        std::string stringetje = "ABCDEF";
        int indexID = 0; 
        for(int i = 0; i < stringetje.length(); i++){
            if(stringetje[i] == 'D'){
                indexID = i;
                break;
            }
        }
        std::cout << "Index van D is op: " << indexID <<std::endl;
        return indexID;
        // Zie hierboven een simpele manier om de index van een letter binnen een string te vinden. Waarom werkt dit niet?
        // Pas de code aan zodat die werkt zoals je zou verwachten.

        /* Het lag voornamelijk aan dat if geen bracket haakjes had: {} */
    }   








     void pointers_character_strings(){
        // Wat krijg je te zien wanneer je deze functie uitvoert? Waarom?
        // Schrijf je uitleg in een comment in je code.

        char hoiString1[] = "Hoi"; // C style manier van een array waarbij je char voor char element in de array stop dus het ziet er uit als {H,o,i}
        char hoiString2[] = "Hoi";
        

        bool beideCStyleHoisZelfde = hoiString1 == hoiString2; //checks of beide array geheugenadressen hetzelfde zijn, dus niet de values maar adressen!!!!
        if(beideCStyleHoisZelfde) // als true dan wordt dit uitgevoerd
            std::cout << "Beide C-style strings zijn hetzelfde"; // print in console deze message als true
        else
            std::cout << "De C-style strings zijn niet hetzelfde"; //print dit als het niet true is

            //Ik merk wel dat de IF statment geen {} bracets heeft wat mogelijk invloed heeft op de resultaten

            /* Na wat research te hebben gedaan is het zo dat in oude C-style arrys zoals hier je niet de waarden zelf vergelijkt met elkaar
            maar de geheugen adressen wat in dit geval anders zijn in beide hier voor zou je een reference moet gebruiken om naar de oorspronkelijke gehuegenadress
            te verwijzen. */

        std::cout << std::endl;
        std::string hoiString3 = "Hoi"; // STL manier om een string op te slaan
        std::string hoiString4 = "Hoi";

        bool beideStdHoisZelfde = hoiString3 == hoiString4; //checks of beide STL strings letterlijk hetzelfde qua value zijn
        if(beideStdHoisZelfde) //als true dan wordt dit geprint
            std::cout << "Beide std::strings zijn hetzelfde";
        else //als false dan wordt dit uitgeprint
            std::cout << "De std::string s zijn niet hetzelfde";

        std::cout << std::endl;
     }




     void pointers_references(){

        // Ga met behulp van de debugger in CLion stap voor stop door deze code, en bekijk de waardes van x, y, pX en pY.
        // Zet je conclusies in een comment in je code.
        int x = 10;
        int y = 20;

        int *pX = &x;
        int *pY = &y;
        //a: Wat is op dit moment de waarde van x? en van pX?

        /*De waarden van x is nu 10, de waarden van pX is nu de geheugenadress van x omdat het point naar de reference oftewel de adress van x*/
        *pX = 11;
        //b: En nu?

        /*Als we de pointer var aanpassen naar 11 dan veranderen we de waarden van x naar 11 omdat pX naar de geheugenadress verwijst*/
        x = 13;
        //c: En nu?

        /*Hier mee passen we de waarden van x naar 13 van 11 en passen we de geheugenadress van pX niet aan!!*/
        pY = pX;
        //d: Wat is nu de waarde van pY? en van y?
        /*pY krijgt nu het zelfde waarden als pX dus het verwijst naar de x geheugenadress*/
        *pY = 30;
        //e: En nu?

        /*We passen de waarden van x van 13 naar 30 omdat pY verwees naar x geheugen adress omdat we net zeiden dat pY = pX*/
        int& rX = *pX;
        rX = 123;
        //f: Wat is nu de waarde van pX, en van x?

        /* de waarden van pX is nog steeds de geheugen adress van x maar de waarden van x wordt aangepast naar 123 en niet meer 30
        dus rX is == x*/

    }







}
