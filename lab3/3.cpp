#include <iostream>

class pojazd{
    public:
        std::string silnik;
        void uruchom(){
            std::cout<<"Silnik obiektu pracuje"<<std::endl;
        }
};
class samochod:public virtual pojazd{
    public:
        int liczba_kol;
        int liczba_miejsc;
        void jedz(){
            std::cout<<"Obiekt jedzie"<<std::endl;
        }
        void hamuj(){
            std::cout<<"Obiekt hamuje"<<std::endl;
        }
};
class lodz:public virtual pojazd{
    public:
        float wypornosc;
        void plyn(){
            std::cout<<"Obiekt plynie"<<std::endl;
        }
        void hamuj(){
            std::cout<<"Obiekt hamuje"<<std::endl;
        }
};
class samolot:public virtual pojazd{
    public:
        int pulap;
        int liczba_miejsc;
        void lec(){
            std::cout<<"Obiekt leci"<<std::endl;
        }
        void hamuj(){
            std::cout<<"Obiekt hamuje"<<std::endl;
        }
};
class amfibia:public samochod, public  lodz{

};
class hydroplan: public  samolot, public  lodz{

};

int main(){
    amfibia amfibia1;
    hydroplan hydroplan1;
    amfibia1.silnik="diesel";
    amfibia1.liczba_kol=6;
    amfibia1.wypornosc=500.5;
    amfibia1.liczba_miejsc=10;

    amfibia1.uruchom();
    amfibia1.jedz();
    amfibia1.plyn();
    amfibia1.samochod::hamuj();

    hydroplan1.silnik="diesel";
    hydroplan1.wypornosc=500.6;
    hydroplan1.liczba_miejsc=5;
    hydroplan1.pulap=400;

    hydroplan1.uruchom();
    hydroplan1.plyn();
    hydroplan1.lec();
    hydroplan1.lodz::hamuj();
}