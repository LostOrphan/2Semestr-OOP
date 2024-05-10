#include <iostream>
#include <thread>
#include <mutex>
#include <fstream>
std::mutex m;
std::fstream plik;
class Thread{
    public:
        std::string wynik;
        int numerWatku;
        float liczba=0;
        Thread(int numer){
            this->numerWatku=numer;
        }
        void losowanie(){
            // plik.open("rezultat.txt",std::ios::out);
            for(int i=1;i<=5;i++){
                liczba+=rand()%100+1;
                wynik="Watek "+std::to_string(numerWatku)+" | "+std::to_string(i)+" | "+std::to_string(liczba/i)+"\n";
                m.lock();
                plik<<wynik;
                m.unlock();
            }
        }
};
int main(){
    plik.open("rezultat.txt", std::ios::trunc | std::ios::out);
    Thread watek1(1);
    Thread watek2(2);
    Thread watek3(3);
    Thread watek4(4);
    Thread watek5(5);
    std::thread t1(&Thread::losowanie, &watek1);
    std::thread t2(&Thread::losowanie, &watek2);
    std::thread t3(&Thread::losowanie, &watek3);
    std::thread t4(&Thread::losowanie, &watek4);
    std::thread t5(&Thread::losowanie, &watek5);
    t1.join();
    t2.join();
    t3.join();
    t4.join();
    t5.join();
    plik.close();
}