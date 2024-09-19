#include <iostream>
using namespace std;

#define WIELKOSC 3

void pokazAdresy() {
    int tab[WIELKOSC][WIELKOSC];
    int i, j;

    for (i = 0; i < WIELKOSC; i++) {
        for (j = 0; j < WIELKOSC; j++) {
            tab[i][j] = i * WIELKOSC + j; // Przypisanie wartości dla łatwiejszej identyfikacji
        }
    }

    cout << "Adresy elementów tablicy dwuwymiarowej:" << endl;
    for (i = 0; i < WIELKOSC; i++) {
        for (j = 0; j < WIELKOSC; j++) {
            cout << "Adres tab[" << i << "][" << j << "] = " << &tab[i][j] << endl;
        }
    }
}

int main() {
    pokazAdresy();
    return 0;
}
