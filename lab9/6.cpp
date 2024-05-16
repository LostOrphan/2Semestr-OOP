//dodatek funkcji z 4 
#include <iostream>
#include <cmath>

class Matematyczne{
    private:
        float a,b;
    public:
        Matematyczne(float pierwsza,float druga){a=pierwsza;b=druga;}
        void wypisz(){
            std::cout<<a<<" "<<b;
        }
        float suma(){
            return a+b;
        }
        float roznica(){
            return a-b;
        }
        float iloczyn(){
            return a*b;
        }
        float iloraz(){
            if(b==0){
                std::string wyjatek="Blad: dzielenie przez 0 \n";
                throw wyjatek;
            }
            return a/b;
        }
        float pierwiastekA(){
            if(a<0){
                std::string wyjatek="Blad: pierwiastek kwadratowy z liczby ujemnej \n";
                throw wyjatek;
            }
            return sqrt(a);
        }
        float pierwiastekB(){
            if(b<0){
                std::string wyjatek="Blad: pierwiastek kwadratowy z liczby ujemnej \n";
                throw wyjatek;
            }
            return sqrt(b);
        }
};
int main(){
    float pierwsza,druga;
    std::cout<<"Podaj 1 liczbe: ";std::cin>>pierwsza;
    std::cout<<"Podaj 2 liczbe: ";std::cin>>druga;
    Matematyczne dzialania(pierwsza,druga);
    std::cout<<"Suma: "<<dzialania.suma()<<"\n";
    std::cout<<"Roznica: "<<dzialania.roznica()<<"\n";
    std::cout<<"Iloczyn: "<<dzialania.iloczyn()<<"\n";
    try{
    std::cout<<"Iloraz: "<<dzialania.iloraz()<<"\n";
    }
    catch(std::string wyj){std::cout<<wyj;}
    try{
    std::cout<<"Pierwiastek 1 liczby: "<<dzialania.pierwiastekA()<<"\n";
    }
    catch(std::string wyj){std::cout<<wyj;}
    try{
    std::cout<<"Pierwiastek 2 liczby: "<<dzialania.pierwiastekB()<<"\n";
    }
    catch(std::string wyj){std::cout<<wyj;}
return 0;
}