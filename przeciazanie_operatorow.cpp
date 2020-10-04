#include <iostream>
using namespace std;

class Ulamek{
public:
    int licznik{0};
    int mianownik{1};

    Ulamek(){}

    Ulamek(int l, int m): licznik{l}, mianownik{m}{}

    void print(){
        cout << licznik << "\\" << mianownik << endl;

    }

    Ulamek operator+(Ulamek &obiekt){
        return Ulamek(this->licznik+obiekt.licznik, mianownik);

    }

    Ulamek operator*(Ulamek &obiekt){
        return Ulamek(licznik*obiekt.licznik, mianownik*obiekt.mianownik);
    }

    Ulamek operator-(Ulamek &obiekt){
        return Ulamek(licznik-obiekt.licznik, mianownik-obiekt.mianownik);
    }
};

class ListaUlamkow{
public:
    Ulamek *wskaznik;
    int ilosc;

    ListaUlamkow(int i): ilosc{i}{
        wskaznik = new Ulamek[ilosc];
    }

    ~ListaUlamkow(){
        delete[] wskaznik;
    }

    Ulamek &operator[](int e){
        return wskaznik[e];
    }

};

ostream &operator<<(ostream &tekst, const Ulamek &obiekt){
    tekst << obiekt.licznik << "\\" << obiekt.mianownik;
    return tekst;
}


ostream &operator<<(ostream &tekst, const Ulamek *obiekt){
    tekst << *obiekt;
    return tekst;
}


int main(){
    /*
    Ulamek x,z;
    Ulamek y{4,1};

    x.licznik = 1;

    x.print();
    y.print();
    z.print();

    z=y-x;

    z.print();

    cout << y-x <<endl;
    */

    ListaUlamkow tablica{5};
    tablica[0] = {1,5};
    tablica[1].licznik = 1;
    tablica[1].mianownik = 6;

    Ulamek x{2,7};
    Ulamek y{3,8};

    tablica[2] = x;
    tablica[3] = y;

    for (int i=0; i < tablica.ilosc; i++)
    cout << i << ". Element - " << tablica[i] << endl;

    return 0;
}
