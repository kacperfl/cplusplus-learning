# include <iostream>

// using namespace std;
using namespace std;

namespace myPerson{
    int age = 21;
    string name = "Kacper";
    string hobby = "Programming";
    float happyness = 73.5;
}

namespace Mathing{
    const double pi = 3.1416;
    double value = 2 * pi;
}

int main(){
    
    std:: cout << myPerson::name << '\n';
    std:: cout << myPerson::age << '\n';
    std:: cout << myPerson::hobby << '\n';
    cout << myPerson:: happyness;
    cout << Mathing::value << endl;
    return 0;

}