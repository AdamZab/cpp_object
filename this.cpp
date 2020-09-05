#include <iostream>
#include <string>
using namespace std;

class Nazwa{
public:
    int x{};

    void wydrukuj(){
        cout << "Wartosc x: " << this->x << " adres obiektu: "<< this << endl;

    }

    void zmien(int x){
        this->x = x;

    }
};

int main(){

    Nazwa obiekt1;
    Nazwa obiekt2;
    Nazwa obiekt3;

    cout << "Adres obiekt1: " << &obiekt1 << endl;
    cout << "Adres obiekt2: " << &obiekt2 << endl;
    cout << "Adres obiekt3: " << &obiekt3 << endl;

    obiekt1.x = 1;
    obiekt2.x = 3;
    obiekt3.x = 9;

    obiekt1.wydrukuj();
    obiekt2.wydrukuj();
    obiekt3.wydrukuj();

    obiekt3.zmien(911);
    obiekt3.wydrukuj();

    return 0;
}
