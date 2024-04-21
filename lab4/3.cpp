#include <iostream>

class Osoba{
    public:
        std::string imie,nazwisko;
        Osoba(std::string imie,std::string nazwisko){
            this->imie=imie;
            this->nazwisko=nazwisko;
        }  
};
class Adres:public virtual Osoba{
    public:
        std::string ulica_z_numerem;
        std::string miasto;
        std::string wojewodztwo;
        Adres(std::string ulica_z_numerem, std::string miasto,std::string wojewodztwo/*,std::string imie,std::string nazwisko*/):Osoba(imie,nazwisko){
            // this->ulica_z_numerem=ulica_z_numerem;
            // this->miasto=miasto;
            // this->wojewodztwo=wojewodztwo;
        };  
};
class Kontakt:public virtual Osoba{
    public:
        int nr_telefonu;
        Kontakt(int nr_telefonu):Osoba(imie,nazwisko){
            // this->nr_telefonu=nr_telefonu;
        }
};
class Wizytowka:public  Adres,public Kontakt{
    public:
        Wizytowka(std::string imie, std::string nazwisko, std::string ulica_z_numerem, std::string miasto, std::string wojewodztwo, int nr_telefonu)
        :Osoba(imie,nazwisko),Adres(ulica_z_numerem, miasto, wojewodztwo/*,imie,nazwisko*/), Kontakt(nr_telefonu){
            // this->ulica_z_numerem=ulica_z_numerem;
            // this->nr_telefonu=nr_telefonu;
            // this->miasto=miasto;
            // this->wojewodztwo=wojewodztwo;
            // this->nr_telefonu=nr_telefonu;
            
        }
        void wypiszWszystko(){
            std::cout<<"Imie: "<<std::endl;
            std::cout<<"Nazwisko: "<<std::endl;
            std::cout<<"Nr telefonu: "<<nr_telefonu<<std::endl;
            std::cout<<"Ulica z numerem: "<<ulica_z_numerem<<std::endl;
            std::cout<<"Miasto: "<<miasto<<std::endl;
            std::cout<<"Wojewodztwo: "<<wojewodztwo<<std::endl;

        }
};

int main(){
    Osoba Jan("Jan","Kowalski");
    Adres adresJan("ulica 1","Jelenia Gora","Dolny Slask"/*,"Jan","Kowalski"*/);
    Kontakt kontaktJan(123456789);
    Wizytowka wizytowkaJan("Jan","Kowalski","ulica 1","Jelenia Gora","Dolny Slask",123456789);
    wizytowkaJan.wypiszWszystko();
}