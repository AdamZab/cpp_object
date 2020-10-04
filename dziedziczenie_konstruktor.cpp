#include <iostream>
#include <string>
using namespace std;

class Silnik{
private:
    const string numerSeryjny{};
    const int rokProdukcji{};

public:
    Silnik(){
        cout << "Zadzialal konstruktor domniemany klasy Silnik" << endl;
    }

    Silnik(string ns, int r): numerSeryjny{ns}, rokProdukcji{r}{
        cout << "zadzialal konstruktor 2 parametrowy klasy Silnik" << endl;
    }
    ~Silnik(){
        cout << "zadzialal destruktor klasy Silnik" << endl;
    }
    void wydrukuj(){
        cout << "Numer seryjny: " << numerSeryjny << endl;
        cout << "Rok produkcji: " << rokProdukcji << endl;
    }
};

class SilnikElektryczny: public Silnik{
public:
    int mockW{};
    int napiecie;
    SilnikElektryczny(){
            cout << "zadzialal konstruktor domniemany klasy SilnikElektryczny" << endl;
    }

    SilnikElektryczny(int m, int n): mockW{m}, napiecie{n}{
        cout << "zadzialal konstruktor 2 parametrowy klasy SilnikElektryczny" << endl;
    }

    SilnikElektryczny(string ns, int r, int m, int n): Silnik{ns,r}, mockW{m}, napiecie{n}{
        cout << "Zadzialal konstruktor 4 parametrowy klasy SilnikElektryczny" << endl;
    }
    ~SilnikElektryczny(){
        cout << "zadzialal destruktor klasy SilnikElektryczny" << endl;
    }

    void wydrukuj(){
        Silnik::wydrukuj();
        cout << "Moc w kW: " << mockW << endl;
        cout << "Napiecie: " << napiecie << endl;
    }
};

int main(){

    //Silnik cm82{"abc0001", 2020};
    //cm82.wydrukuj();

    //SilnikElektryczny em90{200,12};
    //em90.wydrukuj();

    SilnikElektryczny em90{"abc0001", 2020, 200,12};
    em90.wydrukuj();

    return 0;
}
