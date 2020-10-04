#include <iostream>
using namespace std;

class KlasaA{
public:
    int zmiennaPublic{1};
    void drukuj(){
        cout << "KlasaA\n";
        cout << "zmiennaPublic: " << zmiennaPublic << endl;
        cout << "zmiennaProtected: " << zmiennaProtected << endl;
        cout << "zmiennaPrivate: " << zmiennaPrivate << endl;
    }
protected:
    int zmiennaProtected{2};
private:
    int zmiennaPrivate{3};

};

class KlasaB: public KlasaA{
    /*
class KlasaA{
    public: -> public:
    protected: -> protected:
    private: -> private:
}
    */

public:
    void drukujB(){
    cout << "KlasaB\n";
    cout << "zmiennaPublic: " << zmiennaPublic << endl;
    cout << "zmiennaProtected: " << zmiennaProtected << endl;
    cout << "zmiennaPrivate: - brak dostepu" << endl;
}



};

class KlasaC: protected KlasaA{
    /*
class KlasaA{
    public: -> protected:
    protected: -> protected:
    private: -> private:
}
    */
public:
    void drukujC(){
    cout << "KlasaC\n";
    cout << "zmiennaPublic: " << zmiennaPublic << endl;
    cout << "zmiennaProtected: " << zmiennaProtected << endl;
    cout << "zmiennaPrivate: - brak dostepu" << endl;
}
void drukuj(){
    KlasaA::drukuj();

}

};

class KlasaD: private KlasaA{
        /*
    class KlasaC{
        public: -> private:
        protected: -> private:
        private: -> private:
    }
        */
public:
    void drukujD(){
    cout << "KlasaD\n";
    cout << "zmiennaPublic: " << zmiennaPublic << endl;
    cout << "zmiennaProtected: " << zmiennaProtected << endl;
    cout << "zmiennaPrivate: - brak dostepu" << endl;
}
    void drukuj(){
        KlasaA::drukuj();
    }

};

class KlasaMix: public KlasaD{
public:
    void drukuj(){

    }

};


int main()
{
    KlasaA obiektA;

    obiektA.zmiennaPublic = 999;
    obiektA.drukuj();

    KlasaB obiektB;
    obiektB.zmiennaPublic = 888;
    cout << "Wywolanie metody drukuj z klasyA\n";
    obiektB.drukujB();
    cout << "Z klasyB mozemy wywolac metode klasyA i uzyskac dostep do elementow prywatnych" << endl;
    obiektB.drukuj();

    KlasaC obiektC;
    //obiektC.zmiennaPublic = 777;
    obiektC.drukujC();
    cout << "Z klasyC mozemy wywolac metode klasyA i uzyskac dostep do elementow prywatnych" << endl;
    obiektC.drukuj();

    KlasaD obiektD;
    //obiektD.zmiennaPublic = 333;
    //obiektD.drukuj(); - metoda z KlasaA
    obiektD.drukujD();
    cout << "Z klasyD mozemy wywolac metode klasyA i uzyskac dostep do elementow prywatnych" << endl;
    obiektD.drukuj();

    KlasaMix obiektMix;
    //obiektMix.zmiennaPublic = 333;
    obiektMix.drukujD();


    return 0;
}
