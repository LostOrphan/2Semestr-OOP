#include <iostream>
using namespace std;
class prostokat{
    protected:
        float bokA;
        float bokB;
    public:
        void ustawBoki(float bokA_argument,float bokB_argument){
            this->bokA=bokA_argument;
            this->bokB=bokB_argument;
        }
        float obliczPole(){
            return this->bokA*this->bokB;
        }
        float obliczoObwod(){
            return (this->bokA*2)+(this->bokB*2);
        }
};
class prostopadloscian{
    protected:
        float bokA;
        float bokB;
        float bokC;
    public:
        void ustawBoki(float bokA,float bokB,float bokC){
            this->bokA=bokA;
            this->bokB=bokB;
            this->bokC=bokC;
        }
        float obliczPolePodstawy(){
            return(this->bokA*this->bokB);
        }
        float obliczPoleSciany1(){
            return(this->bokB*this->bokC);
        }
        float obliczPoleSciany2(){
            return(this->bokA*this->bokC);
        }
        float obliczPoleCalkowite(){
            return (this->bokA*this->bokB*2)+(this->bokA*this->bokC*2)+(this->bokB*this->bokC*2);
        }
        float obliczObjetosc(){
            return(this->bokA*this->bokB)*this->bokC;
        }
};
int main(){
    float bokAinput,bokBInput,bokCInput;
    prostokat prostokat1;
    prostopadloscian prostopadloscian1;
    cout<<"Podaj 1 bok prostokatu: "; cin>>bokAinput;
    cout<<"Podaj 2 bok prostokatu: "; cin>>bokBInput;
    prostokat1.ustawBoki(bokAinput,bokBInput);
    cout<<"Pole prostokata wynosi: "<<prostokat1.obliczPole()<<endl;
    cout<<"Obwod prostokata wynosi: "<<prostokat1.obliczoObwod()<<endl;

    cout<<"Podaj 1 bok szescianu: "; cin>>bokAinput;
    cout<<"Podaj 2 bok szescianu: "; cin>>bokBInput;
    cout<<"Podaj 3 bok szescianu: "; cin>>bokCInput;
    prostopadloscian1.ustawBoki(bokAinput,bokBInput,bokCInput);
    cout<<"Pole podstawy wynosi: "<<prostopadloscian1.obliczPolePodstawy()<<endl;
    cout<<"Pole jednej sciany wynosi: "<<prostopadloscian1.obliczPoleSciany1()<<endl;
    cout<<"Pole drugiej sciany wynosi: "<<prostopadloscian1.obliczPoleSciany2()<<endl;
    cout<<"Pole prostopadlosciainu wynosi: "<<prostopadloscian1.obliczPoleCalkowite()<<endl;
    cout<<"Objetosc prostopadloscianu wynosi: "<<prostopadloscian1.obliczObjetosc()<<endl;
}