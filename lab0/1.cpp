#include <iostream>
using namespace std;
float obliczPole(float bok) {
    return bok*bok;
}
float obliczObjetosc(float bok) {
    return bok*bok*bok;
}
int main() {
    float bok_kwadr1;
    float bok_kwadr2;
    float bok_szescl;
    float bok_szesc2;
    bok_kwadr1=5;
    cout<<"Pole kwadratu 1: "<<obliczPole (bok_kwadr1)<<endl;
    cout<<"Podaj bok kwadratu 2 ";
    cin>>bok_kwadr2;
    cout<<"Pole kwadratu 2: "<<obliczPole (bok_kwadr2)<<endl;
    cout<<"Podaj bok szescianu 1 ";
    cin>>bok_szescl;
    cout<<"Pole scianki szescianu 1: "<<obliczPole (bok_szescl) <<endl;
    cout<<"Objetosc szescianu 1: "<<obliczObjetosc(bok_szescl) <<endl;
    cout<<"Podaj bok szescianu 2 ";
    cin >>bok_szesc2;
    cout<<"Pole scianki szescianu 2: "<<obliczPole(bok_szesc2)<<endl;
    cout<<"Objetosc szescianu 2: "<<obliczObjetosc (bok_szesc2) <<endl;
    return 0;
}