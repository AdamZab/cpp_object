#include <iostream>
#include <string>
using namespace std;

class Programator{
public:
    string *wskaznik;
    int iloscProgramow;
    int rokProdukcji;

    Programator(): Programator{1,2020}{
        cout << "konstruktor bez argumentow\n";
    }

    Programator(int x): Programator{(x < 1000)?x:1,(x < 1000)?2020:x}{
        cout << "Konstruktor 1 argumentowy\n";

    }


    Programator (int ilosc, int rok): iloscProgramow{ilosc}, rokProdukcji{rok}{
        cout << "Konstruktor 2 argumentowy\n";
        wskaznik = new string[iloscProgramow];
        cout << "Tablica strinkow zarezerwowana\n";
    }

    ~Programator(){
        cout << "obiekt skasowany\n";
        delete[] wskaznik;
    }
};

int main() {

    Programator amica900{10,2019};
    Programator dosia;
    Programator zefir{10};
    cout << zefir.iloscProgramow << endl;
    cout << zefir.rokProdukcji << endl;

    return 0;
}
