#include <iostream>
using namespace std;

class Postac{
public:
    virtual void przedstawSie(){
        cout << "Metoda Postac" << endl;
    }
    virtual ~Postac(){}
};

class Czlowiek: public Postac{
public:
    void przedstawSie(){
        cout << "Metoda Czlowiek" << endl;
    }
};

class Mnich: public Postac{
public:
    void przedstawSie(){
        cout << "Metoda Mnich" << endl;
    }
};

class Rycerz: public Postac{
public:
    void przedstawSie(){
        cout << "Metoda Rycerz" << endl;
    }
};

void ktoTo(Postac &obiekt){
    obiekt.przedstawSie();
}


int main(){

    Postac *kto;

    Czlowiek obiekt1;
    Mnich obiekt2;
    Rycerz obiekt3;


    kto = &obiekt3;
    ktoTo(*kto);
    kto = &obiekt2;
    ktoTo(*kto);
    kto = &obiekt1;
    ktoTo(*kto);

    return 0;
}
