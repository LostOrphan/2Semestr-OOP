#include <iostream>

template <typename T>
T minimum(T a, T b){
    return a<b ? a : b;
}
int main(){
    std::cout<<minimum<int>(2,7)<<std::endl;
    double x=5.6;
    double y=3.14;
    double wynik=minimum(x,y);
    std::cout<<wynik<<std::endl;
    std::string s1="mathematics";
    std::string s2="math";
    std::cout<<minimum(s1,s2)<<std::endl;
}