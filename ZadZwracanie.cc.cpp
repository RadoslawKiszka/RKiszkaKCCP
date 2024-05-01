/*Zadanie: Napisać program z czterema funkcjami z których każda zwraca inaczej:
1. Przez wartość
2. Przez referencje
3. Przez wskaźnik
4. Tablice (proszę się zastanowić o co tak naprawę chodzi)
- nazwać program: ZadZwracanie.cc*/
#include <iostream>
#include <string>
using namespace std;

int FunkcjaWartosc(int x){
    return x;
}

int FunkcjaRef(int &x){
    x;
}

int FunkcjaWSK(int *x){
    *x;
}

void FunkcjaTAB(int tab[], int rozmiar) {
    for (int i = 0; i < rozmiar; i++) {
        tab[i] += 10;
    }
}

int main(){
    
    int liczba = 5;
    
    int *wsk = &liczba;
    
    int tablica[] = {1, 2, 3, 4, 5};
    int rozmiar = sizeof(tablica) / sizeof(tablica[0]);    
    int wynik = FunkcjaWartosc(liczba);
    
    int wynik2 = FunkcjaRef(liczba);
    
    int wynik3 = FunkcjaWSK(wsk);
    
    cout<<"Liczba: "<< liczba<<"\nTablica: ";
    for (int i = 0; i < rozmiar; i++) {
        cout << tablica[i] << " ";
    }
    
    cout<< "\nWynik zwrotu przez wartosc: "<< wynik<<"\n";
    cout<< "Wynik zwrotu przez Referencje: "<< wynik2<<"\n";
    cout<< "Wynik zwrotu przez Wskaznik: "<< wynik3<<"\n";
    
    
    

    FunkcjaTAB(tablica, rozmiar);
    cout << "Wynik tablicy po zmianie: ";
    for (int i = 0; i < rozmiar; i++) {
        cout << tablica[i] << " ";
    }
    
    return 0;
}