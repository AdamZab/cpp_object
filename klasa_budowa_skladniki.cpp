#include <iostream>
#include <string>
using namespace std;



// Własny typ danych - deinicja klasy - tworzenie obiektu - analogia do tworzenia zmiennej
/*
class Punkt
{
public:
    float x{0};
    float y{0};

};*/

// Skladowe dane - dostep do danych obiekt. wskaznik -> referencja

//Referencja do zmiennej, np. wykorzystanie do przesylania danych do funkcji
int dodaj(int x){
    x = x + 5;
    cout << "wartosc zmiennej x w funkcji dodaj: " << x << endl;
    return x;
}

/*
int dodajDoOryginalu(int &x){
    x = x + 50;
    cout << "wartosc zmiennej x w funkcji dodajDoOryginalu: " << x << endl;
    return x;
}
*/

int dodajDoOryginalu(const int &x){
    return x + 50;
}

//Skladowe funkcje

class Punkt
{
    public:
        float x{0};
        float y{0};

        int tablica[10]{1,2,3,4,5};
        int tablica2[10]{};

        void przesun(float a, float b){
            x = x + a;
            y = y + b;
    }

    float wydrukuj(){
        return y;
    }

};

//Kapsułowanie

//Ukrywanie informacji etykierea public: private:

//Definicja klasy a obiektu

//Różne dane te same funkcje

//Wartosci wsteone zapisane w klasie


int main(){
/*
    Punkt punkt1;
    Punkt *wskaznikPunkt;
    wskaznikPunkt = &punkt1;
    Punkt &referencjaNaPunkt1{punkt1};

    cout << punkt1.x << ", " << punkt1.y << endl;

    punkt1.x = 10;
    punkt1.y = 4.5;

    cout << punkt1.x << ", " << punkt1.y << endl;

    wskaznikPunkt -> y = 100.99;

    cout << punkt1.x << ", " << punkt1.y << endl;

    referencjaNaPunkt1.x = 0.99;

    cout << punkt1.x << ", " << punkt1.y << endl;
*/

/*
    int liczbaX{99};

    dodaj(liczbaX);

    cout << "wartosc zmiennej liczbaX: " << liczbaX << endl;

    cout << "wartosc liczbaX przed funkcja " << liczbaX << endl;

    cout << "wartosc zwracana przez funkcje: " << dodajDoOryginalu(liczbaX) << endl;

    cout << "wartosc liczbaX za funkcja " << liczbaX << endl;
*/

    Punkt obiekt1;
    Punkt para2;

    obiekt1.przesun(2, -1.5);

    cout << "wartosc x: " << obiekt1.x << " wartosc y: " << obiekt1.wydrukuj() << endl;

    cout << "wartosc x: " << para2.x << " wartosc y: " << para2.wydrukuj() << endl;

    cout << obiekt1.tablica[4] << ", " << obiekt1.tablica[9] << endl;

    cout << obiekt1.tablica2[4] << ", " << obiekt1.tablica2[9] << endl;



    return 0;
}
