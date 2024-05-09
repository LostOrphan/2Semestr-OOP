#include <iostream>
#include <thread>

class Thread1{
    public:
        float liczba=0;
        std::string wynik;
        void losowanie(){
            for(int i=1;i<=100;i++){
                liczba+=rand()%100+1;
                wynik="Watek 1 | "+std::to_string(i)+" | "+std::to_string(liczba/i)+"\n";
                std::cout<<wynik;
            }
        }
};
class Thread2{
    public:
        float liczba=0;
        std::string wynik;
        void losowanie(){
            for(int i=1;i<=50;i++){
                liczba+=rand()%10000+1;
                wynik="Watek 2 | "+std::to_string(i)+" | "+std::to_string(liczba/i)+"\n";
                std::cout<<wynik;
            }
        }
};
int main(){
    Thread1 watek1;
    Thread2 watek2;
    std::thread t1(&Thread1::losowanie, &watek1);
    std::thread t2(&Thread2::losowanie, &watek2);
    t1.join();
    t2.join();
    return 0;
}