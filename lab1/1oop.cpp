#include <iostream>
using namespace std;

class Kwadrat {
    protected:
        float bok;
    public:
    void ustawBok(float bok_argument) {
        this->bok=bok_argument;
    }float podajBok() {
        return this->bok;
    }
    float obliczPole();
};
float Kwadrat::obliczPole() {
    return this->bok*bok;
}
class Szescian : public Kwadrat {
    public:
        float obliczObjetosc() {
            return this->bok*this->bok*this->bok;
        }
};
    int main() {
    float bok_z_klawiatury;
    Kwadrat kwadrl1, kwadr2;
    Szescian szescl, szesc2;
    kwadrl1.ustawBok(5) ;
    cout<<"Pole kwadratu 1: "<<kwadrl1.obliczPole()<<endl;
    cout<<"Podaj bok kwadratu 2 ";cin>>bok_z_klawiatury;
    kwadr2.ustawBok (bok_z_klawiatury) ;
    cout<<"Pole kwadratu 2: "<<kwadr2.obliczPole()<<endl;
    cout<<"Podaj bok szescianu 1 ";cin>>bok_z_klawiatury;
    szescl.ustawBok(bok_z_klawiatury) ;
    cout<<"Pole scianki szescianu 1: "<<szescl.obliczPole()<<endl;
    cout<<"Objetosc szescianu 1: "<<szescl.obliczObjetosc()<<endl;
    cout<<"Podaj bok szescianu 2 ";cin>>bok_z_klawiatury;
    szesc2.ustawBok (bok_z_klawiatury) ;
    cout<<"Pole scianki szescianu 2: "<<szesc2.obliczPole()<<endl;
    cout<<"Objetosc szescianu 2: "<<szesc2.obliczObjetosc()<<endl;
return 0;
}