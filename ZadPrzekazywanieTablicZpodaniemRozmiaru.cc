#include <iostream>

using namespace std;


void wypiszTablice(int* tablica, int rozmiar) {
    cout << "Elementy tablicy: ";
    for (int i = 0; i < rozmiar; ++i) {
        cout << tablica[i] << " ";
    }
    cout << endl;
}

int main() {
    const int ROZMIAR = 5;
    int tablica[ROZMIAR] = {1, 2, 3, 4, 5};

    wypiszTablice(tablica, ROZMIAR);

    return 0;
}
