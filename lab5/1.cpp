#include <iostream>

class prostokat;

class punkt{
    protected:
        std::string nazwa;
        float x,y;
    public:
        punkt(std::string="zerowy",float=0,float=0);
        void wczytaj();
        friend void pozaProstokatem(punkt &pkt, prostokat &pst);
        friend void wProstokacie(punkt &pkt,prostokat &pst);
        friend void naNaroznikuProstokata(punkt &pkt, prostokat &pst);
        friend void naKrawedziProstokata(punkt &pkt, prostokat &pst);
        friend void wProstokacieBezKrawedzi(punkt &pkt,prostokat &pst);
};
class prostokat: public punkt{
        float szerokosc,wysokosc;
    public:
        prostokat(std::string="jednostkowy",float=0,float=0,float=0,float=0);
        void wczytaj();
        friend void pozaProstokatem(punkt &pkt,prostokat &pst);
        friend void wProstokacie(punkt &pkt,prostokat &pst);
        friend void naNaroznikuProstokata(punkt &pkt, prostokat &pst);
        friend void naKrawedziProstokata(punkt &pkt, prostokat &pst);
        friend void wProstokacieBezKrawedzi(punkt &pkt,prostokat &pst);
};
punkt::punkt(std::string nzw, float xx,float yy){
    nazwa=nzw;
    x=xx;
    y=yy;
}
void punkt::wczytaj(){
    float xx,yy;
    std::string naz;
    std::cout<<"Podaj nazwe punktu: "; std::cin>>naz;
    std::cout<<"Podaj koordynat x: "; std::cin>>xx;
    std::cout<<"Podaj koordynat y: "; std::cin>>yy;
    this->nazwa=naz;
    this->x=xx;
    this->y=yy;
}
prostokat::prostokat(std::string nzw,float xx,float yy,float sze,float wys):punkt(nzw,xx,yy){
    szerokosc=sze;
    wysokosc=wys;
}
void prostokat::wczytaj(){
    float xx,yy,szer,wys;
    std::string naz;
    std::cout<<"Podaj nazwe punktu: "; std::cin>>naz;
    std::cout<<"Podaj koordynat x: "; std::cin>>xx;
    std::cout<<"Podaj koordynat y: "; std::cin>>yy;
    std::cout<<"Podaj szerokosc: "; std::cin>>szer;
    std::cout<<"Podaj wysokosc: "; std::cin>>wys;
    this->nazwa=naz;
    this->x=xx;
    this->y=yy;
    this->szerokosc=szer;
    this->wysokosc=wys;
 
}

void pozaProstokatem(punkt &pkt, prostokat &pst){
    if((pkt.x<pst.x)||(pkt.x>pst.x+pst.szerokosc) || (pkt.y<pst.y)||(pkt.y>pst.y+pst.wysokosc)){
        std::cout<<"Punkt "<<pkt.nazwa<<" poza prostokatem "<<pst.nazwa<<std::endl;
    }
}
void wProstokacie(punkt &pkt,prostokat &pst){
    if((pkt.x>=pst.x)&&(pkt.x<=pst.x+pst.szerokosc) && (pkt.y>=pst.y) && (pkt.y<=pst.y+pst.wysokosc)){
                std::cout<<"Punkt "<<pkt.nazwa<<" w prostokatem "<<pst.nazwa<<std::endl;

    }
}
void wProstokacieBezKrawedzi(punkt &pkt,prostokat &pst){
    if((pkt.x>pst.x)&&(pkt.x<pst.x+pst.szerokosc) && (pkt.y>pst.y) && (pkt.y<pst.y+pst.wysokosc)){
                std::cout<<"Punkt "<<pkt.nazwa<<" w prostokatem "<<pst.nazwa<<std::endl;

    }
}
void naNaroznikuProstokata(punkt &pkt, prostokat &pst){
    if((pkt.x==pst.x)||(pkt.x==pst.x+pst.szerokosc) || (pkt.y==pst.y) || (pkt.y=pst.y+pst.wysokosc)){
        std::cout<<"Punkt "<<pkt.nazwa<<" jest na narozniku prostokata "<<pst.nazwa<<std::endl;
}
}
void naKrawedziProstokata(punkt &pkt, prostokat &pst){
    if((((pkt.x>=pst.x)&&(pkt.x<=pst.x+pst.szerokosc))&&(pkt.y==pst.y||pkt.y==pst.y+pst.wysokosc)||
        (pkt.x==pst.x||pkt.x==pst.x+pst.szerokosc)&&(pkt.y>=pst.y&&pkt.y<=pst.y+pst.wysokosc))){
        std::cout<<"Punkt "<<pkt.nazwa<<" jest na krawedzi prostokata "<<pst.nazwa<<std::endl;

    }
}

int main(){
    //prostokat XY(1,1) Szerokosc 5 Wysokosc 5 (krawedzie 1,1;1,6;6,1;6,6)
    //punkt poza(10,10) (-10,-10)
    //punkt w (5,5)
    //punkt na rogu (1,1)(6,6)
    //punkt na boku (2,1)(4,6),(1,4)(6,4)
    // punkt pkt1;
    // punkt pkt2;
    // prostokat pst;
    // pkt1.wczytaj();
    // pst.wczytaj();
    // pozaProstokatem(pkt1,pst);
    // pkt2.wczytaj();
    // pozaProstokatem(pkt2,pst);
    prostokat pst("P",1,1,5,5);
    punkt pkt1("poza1",10,10),pkt2("poza2",-10,-10),pkt3("w",5,5),pkt4("rog1",1,1),pkt5("rog2",6,6);
    punkt pkt6("bok1",2,1),pkt7("bok2",4,6),pkt8("bok3",1,4),pkt9("bok4",6,4);
    pozaProstokatem(pkt1,pst);
    pozaProstokatem(pkt2,pst);
    wProstokacie(pkt3,pst);
    naNaroznikuProstokata(pkt4,pst);
    naNaroznikuProstokata(pkt5,pst);
    naKrawedziProstokata(pkt6,pst);
    naKrawedziProstokata(pkt7,pst);
    naKrawedziProstokata(pkt8,pst);
    naKrawedziProstokata(pkt9,pst);

    return 0;
}