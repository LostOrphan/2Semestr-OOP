#include <iostream>
#include <math.h>

class Ksztalt{
    public:
    virtual float oblicz_pole()=0;
    virtual float oblicz_obwod()=0;

};
class Kolo: public Ksztalt{
    float r;
    public:
        // Kolo();
        Kolo(){}
        void setKolo(){
            float promien;
            std::cout<<"Podaj promien: ";std::cin>>promien;
            this->r=promien;
        }
        float oblicz_pole(){
            return 3.14*r*r;
        }
        float oblicz_obwod(){
            return 2*3.14*r;
        }
};
class Kwadrat : public Ksztalt{
    float a;
    public:
        Kwadrat(){};
        void setKwadrat(){
            float bok;
            std::cout<<"Podaj bok kwadratu: "; std::cin>>bok;
            this->a=bok;
        }
        float oblicz_pole(){
            return (a*a);   
        }
        float oblicz_obwod(){
            return (4*a);
        }
};
class Trojkat: public Ksztalt{
    float b1,b2,b3;
    public:
        Trojkat(){}
        void setTrojkat(){
            float bok1,bok2,bok3;
            std::cout<<"Podaj 1 bok: ";std::cin>>bok1;
            std::cout<<"Podaj 2 bok: ";std::cin>>bok2;
            std::cout<<"Podaj 3 bok: ";std::cin>>bok3;
            this->b1=bok1;this->b2=bok2;this->b3=bok3;
        }
        float oblicz_obwod(){
            return b1+b2+b3;
        }
        float oblicz_pole(){
            float p=oblicz_obwod()/2;
            return pow(p*(p-b1)*(p-b2)*(p-b3),0.5);
        }
};
void obliczenia(Ksztalt *wsk){
    std::cout<<wsk->oblicz_pole()<<std::endl;
    std::cout<<wsk->oblicz_obwod()<<std::endl;
}

int main(){
    Kolo *kolo=new Kolo();
    Kwadrat *kwadrat= new Kwadrat(); 
    Trojkat *trojkat= new Trojkat();
    Ksztalt *wsk;
    kolo->setKolo();
    wsk=kolo;
    obliczenia(wsk);
    // std::cout<<wsk->oblicz_pole()<<std::endl;
    // std::cout<<wsk->oblicz_obwod()<<std::endl;
    kwadrat->setKwadrat();
    wsk=kwadrat;
    obliczenia(wsk);
    // std::cout<<wsk->oblicz_pole()<<std::endl;
    // std::cout<<wsk->oblicz_obwod()<<std::endl;
    trojkat->setTrojkat();
    wsk=trojkat;
    obliczenia(wsk);

    // std::cout<<wsk->oblicz_pole()<<std::endl;
    // std::cout<<wsk->oblicz_obwod()<<std::endl;

    return 0;
}