#include <iostream>
#include <thread>
#include <mutex>
#include <fstream>

        std::mutex m;
class Thread1{
    public:
        std::string wynik;
        float liczba=0;
        std::fstream plik;
        void losowanie(){
            plik.open("rezultat.txt",std::ios::out);
            for(int i=1;i<=5;i++){
                liczba+=rand()%100+1;
                wynik="Watek 1 | "+std::to_string(i)+" | "+std::to_string(liczba/i)+"\n";
                m.lock();
                plik<<wynik;
                m.unlock();
            }
        }
};
class Thread2{
    public:
            // std::mutex m;
        std::string wynik;
        float liczba=0;
        std::fstream plik;
        void losowanie(){
            plik.open("rezultat.txt",std::ios::out);
            for(int i=1;i<=5;i++){
                liczba+=rand()%100+1;
                wynik="Watek 2 | "+std::to_string(i)+" | "+std::to_string(liczba/i)+"\n";
                m.lock();
                plik<<wynik;
                m.unlock();
            }
        }
};
class Thread3{
    public:
            // std::mutex m;
        std::string wynik;
        float liczba=0;
        std::fstream plik;
        void losowanie(){
            plik.open("rezultat.txt",std::ios::out);
            for(int i=1;i<=5;i++){
                liczba+=rand()%100+1;
                wynik="Watek 3 | "+std::to_string(i)+" | "+std::to_string(liczba/i)+"\n";
                m.lock();
                plik<<wynik;
                m.unlock();
            }
        }
};
class Thread4{
    public:
            // std::mutex m;
        std::string wynik;
        float liczba=0;
        std::fstream plik;
        void losowanie(){
            plik.open("rezultat.txt",std::ios::out);
            for(int i=1;i<=5;i++){
                liczba+=rand()%100+1;
                wynik="Watek 4 | "+std::to_string(i)+" | "+std::to_string(liczba/i)+"\n";
                m.lock();
                plik<<wynik;
                m.unlock();
            }
        }
};
class Thread5{
    public:
            // std::mutex m;
        std::string wynik;
        float liczba=0;
        std::fstream plik;
        void losowanie(){
            plik.open("rezultat.txt",std::ios::out);
            for(int i=1;i<=5;i++){
                liczba+=rand()%100+1;
                wynik="Watek 5 | "+std::to_string(i)+" | "+std::to_string(liczba/i)+"\n";
                m.lock();
                plik<<wynik;
                m.unlock();
            }
        }
};
// class Thread{
// public:
//     std::mutex m;
//     std::string wynik;
//     float liczba = 0;
//     std::fstream& plik;
    
//     Thread(std::fstream& file) : plik(file) {}

//     void losowanie() {
//         for (int i = 1; i <= 5; i++) {
//             liczba += rand() % 100 + 1;
//             wynik = "Watek | " + std::to_string(i) + " | " + std::to_string(liczba / i) + "\n";
//             m.lock();
//             plik << wynik;
//             m.unlock();
//         }
//     }
// };
int main(){
    std::fstream plik;
    plik.open("rezultat.txt", std::ios::trunc | std::ios::out);
    Thread1 watek1;
    Thread2 watek2;
    Thread3 watek3;
    Thread4 watek4;
    Thread5 watek5;
    std::thread t1(&Thread1::losowanie, &watek1);
    std::thread t2(&Thread2::losowanie, &watek2);
    std::thread t3(&Thread3::losowanie, &watek3);
    std::thread t4(&Thread4::losowanie, &watek4);
    std::thread t5(&Thread5::losowanie, &watek5);
    t1.join();
    t2.join();
    t3.join();
    t4.join();
    t5.join();
    plik.close();
    return 0;
}
