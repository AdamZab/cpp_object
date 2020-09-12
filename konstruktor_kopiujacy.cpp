#include <iostream>
#include <string>
using namespace std;


class Drzewo{
public:
    int wielkosc;
    string *nazwa;


    Drzewo(int w, string n){
        wielkosc = w;
        nazwa = new string{n};
        cout << "\nKonstruktor: adres: " << nazwa << endl;
    }

    Drzewo(const Drzewo &obiekt){
        nazwa = new string{*obiekt.nazwa};
        wielkosc = obiekt.wielkosc;
        cout << "\nKonstruktor kopiujacy adres: " << nazwa << endl;
    }

    ~Drzewo(){
        cout << "\nDestruktor: adres: " <<  nazwa << endl;
        delete nazwa;
    }



};

int main() {

    Drzewo obiekt1(10, "Sosana");
    Drzewo obiekt2(2, "Klon");

    cout << "Obiekt 1 wielkosc: " << obiekt1.wielkosc << " nazwa: " << *obiekt1.nazwa << " adres: " << obiekt1.nazwa << endl;
    cout << "Obiekt 2 wielkosc: " << obiekt2.wielkosc << " nazwa: " << *obiekt2.nazwa << " adres: " << obiekt2.nazwa << endl;

    Drzewo obiekt3(obiekt1);
    *obiekt3.nazwa = "Brzoza";

    cout << "Obiekt 3 wielkosc: " << obiekt3.wielkosc << " nazwa: " << *obiekt3.nazwa << " adres: " << obiekt3.nazwa << endl;
    cout << "Obiekt 1 wielkosc: " << obiekt1.wielkosc << " nazwa: " << *obiekt1.nazwa << " adres: " << obiekt1.nazwa << endl;


    return 0;
}
