/*Napisać prosty program z jedną klasą. Wszystko zawarte w jednym pliku: klasa oraz definicje funkcji. Definicje funkcji mogą być w klasie lub poza nią.
Klasa oparta o przykład: KviCar.cc
- nazwać program: ZadClassExample.cc*/
#include <iostream>
#include <string>
using namespace std;
class Owoce{
    public:
        string nazwa;
        string smak;
};


int main(){
    Owoce Owocek1;
    Owocek1.nazwa= "Kiwi";
    Owocek1.smak= "Kwasne\n";
    
    Owoce Owocek2;
    Owocek2.nazwa= "Truskawka";
    Owocek2.smak= "Słodka";
    
    cout<<Owocek1.nazwa<<" "<<Owocek1.smak;
    cout<<Owocek2.nazwa<<" "<<Owocek2.smak;
}