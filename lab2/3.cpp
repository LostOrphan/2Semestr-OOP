#include <iostream>
using namespace std;

class punkt2d{
    protected:
        float x,y;
        string nazwa;
    public:
        void ustawNazwe(){
            cout<<"Podaj nazwe: "<<endl;
            cin>>this->nazwa;
        }
        void ustawWspolrzedne(){
            cout<<"Podaj wspolrzedna x: "<<endl;
            cin>>this->x;
            cout<<"Podaj wspolrzedna y: "<<endl;
            cin>>this->y;
        }
        string zwrocNazwe(){
            return "Nazwa: "+this->nazwa;
        }
};
class kolo : public punkt2d{
    private:
        float promien;
    public:
        void ustawPromien(){
            cout<<"Podaj promien: "<<endl;
            cin>>this->promien;
        }
        float zwrocPromien(){
            return this->promien;
        }
        float zwrocObwod(){
            return 2*3.14*this->promien;
        }
        float zwrocPole(){
            return (this->promien*this->promien)*3.14;
        }
// class punkt3d:punkt2d{
//     protected:
//         float z;
// }
};
int main(){
    string nazwa;
    float x,y,promien;
    punkt2d punkt1,punkt2;
    kolo kolo1,kolo2;
    // cout<<"------Punkt 1------"<<endl;
    // punkt1.ustawNazwe();
    // punkt1.ustawWspolrzedne();
    // cout<<punkt1.zwrocNazwe()<<endl;
    // cout<<"------Punkt 2------"<<endl;
    // punkt2.ustawNazwe();
    // punkt2.ustawWspolrzedne();
    // cout<<punkt2.zwrocNazwe()<<endl;

    cout<<"-----Kolo-----"<<endl;
    kolo1.ustawNazwe();
    kolo1.ustawWspolrzedne();
    kolo1.ustawPromien();
    cout<<kolo1.zwrocNazwe()<<endl;
    cout<<"Promien: "<<kolo1.zwrocPromien()<<endl;
    cout<<"Obwod: "<<kolo1.zwrocObwod()<<endl;
    cout<<"Pole: "<<kolo1.zwrocPole()<<endl;
    return 0;
}