#include <iostream>
using namespace std;

//Klasa abstrakcyjna
class Postac{
public:
    int wiek;
    int iloscPunktow;

//konstrukor
Postac(int w, int i): wiek{w}, iloscPunktow{i}{}

//metoda czysto virtualna
    virtual void toJa() = 0;

//virtualny destruktor
    virtual ~Postac(){}

//metody virtualne
    virtual void przedstawSie(){
        cout << "Klasa Postac: " << endl;
        cout << "Wiek: " << wiek << endl;
        cout << "Punkty: " << iloscPunktow << endl;
    }
};

class Ludzie: public Postac{
public:

void toJa(){}

Ludzie(int p1, int p2): Postac{p1,p2}{}

};

int main(){
    // obiekt klast abstrakcyjnej
    //Postac obiekt;

    Ludzie obiekt2{20,2000};
    obiekt2.przedstawSie();
    return 0;
}
