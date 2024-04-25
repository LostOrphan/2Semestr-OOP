#include <iostream>

template <typename T>
T minimum(T a, T b){
    return a<b ? a : b;
}
template <typename T>
T maximum(T a,T b, T c){
    if(a>b && a>c){
        return a;
    }
    else if(b>a && b>c){
        return b;
    }
    else{
        return c;
    }
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
    std::cout<<"---------------------"<<std::endl;
    std::cout<<maximum<int>(4,6,1)<<std::endl;
}