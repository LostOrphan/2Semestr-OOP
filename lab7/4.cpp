#include <iostream>
template <class T>
class Kalkulator{
    private:
        T a;
        T b;
    public:
        Kalkulator(T first, T second){
            this->a=first; this->b=second;
        }
        ~Kalkulator(){};

        T dodaj(T a,T b){
            return a+b;
        }
        T odejmij(T a,T b){
            return a-b;
        }
        T pomnoz(T a,T b){
            return a*b;
        }
        T podziel(T a,T b){
            if(b==0){
                // std::cout<<"Nie mozna podzielic przez 0";
                return 0;
            }
            else{
                return a/b;
            }
        }
        void wynik();
};

template <typename T>
void Kalkulator<T>::wynik(){
    std::cout<<"Wartosc a: "<<a<<std::endl;
    std::cout<<"Wartosc b: "<<b<<std::endl;
    std::cout<<dodaj(a,b)<<std::endl;
    std::cout<<odejmij(a,b)<<std::endl;
    std::cout<<pomnoz(a,b)<<std::endl;
    std::cout<<podziel(a,b)<<std::endl;
};
int main(){
    Kalkulator<int> k1(2,3);
    Kalkulator<double> k2(5.5,6.5);
    Kalkulator<float> k3(10.12,2.2);
    k1.wynik();
    k2.wynik();
    k3.wynik();

    return 0;
    // Kalkulator<char> k4("a","b");
}