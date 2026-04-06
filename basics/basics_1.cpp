# include <iostream>
// #include <string>



namespace Kacper{
    int dag = 3;
    std::string maand = "April";
    int jaar = 2004;
    std:: string datum = "03/04/2026";
    
}

void printmsg(int dag, std::string maand, int jaar, std::string datum){
    std::cout << "De huidige dag is: " << dag << '\n';
    std:: cout << "De maand is nu : " << maand << '\n';
    std:: cout << "De jaar is nu: " << jaar << '\n';
    std:: cout << "En de datum van vandaag is: " << datum << '\n';
}

bool checker(int dag, int maand, int jaar){
    return (dag % 2 == 0) && (maand % 2 == 0) && (jaar % 2 == 0);
  
}
int main(){
    int dag = Kacper::dag;
    std::string maand = Kacper::maand;
    int jaar = Kacper::jaar;
    std::string datum = Kacper::datum; 

    // voor de check func
    int maand_as_int = 4;

    printmsg(dag, maand, jaar, datum);

    std::string even_oneven = checker(dag, maand_as_int, jaar) ? "Even" : "Oneven";
    std::cout << even_oneven;

    return 0;
}