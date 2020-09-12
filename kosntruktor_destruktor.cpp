#include <iostream>
#include <string>
using namespace std;


class Rower{
public:
    const string numerSeryjny;
    int wielkosc{};
    string stan;
    float cena{};
    int *wsk{nullptr};


    Rower(string ns,int w = 24, string s = "Brak danych", float c = 999.99): numerSeryjny{ns}, wielkosc{w}, stan{s}, cena{c} {

    }

    ~Rower(){

    }
};

int main(){

    Rower wigry("abc00001", 99);
    cout << wigry.wielkosc << endl;
    cout << wigry.stan << endl;
    cout << wigry.cena << endl;
    cout << wigry.numerSeryjny << endl;


    return 0;
}
