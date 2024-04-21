#include <iostream>
class Pojazd{
    public:
        virtual void zartzymaj()=0;
};
class Samochod:public Pojazd{
    public:
    void zatrzymaj(){
        std::cout<<"Zatrzymuje samochod"<<std::endl;
    }
}