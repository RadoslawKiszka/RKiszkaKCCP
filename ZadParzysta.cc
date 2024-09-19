#include <iostream>
using namespace std;

bool isEvenBitwise(int num) {
    // Funkcja sprawdza, czy liczba jest parzysta przy użyciu operacji bitowej
    // Przykład: dla liczby 4 (binarnie 00000100)
    // 4 & 1 = 00000100 & 00000001 = 00000000, więc 4 jest parzysta
    // Dla liczby 5 (binarnie 00000101)
    // 5 & 1 = 00000101 & 00000001 = 00000001, więc 5 jest nieparzysta
    return (num & 1) == 0;
}

bool isEvenModulo(int num) {
    // Funkcja sprawdza, czy liczba jest parzysta przy użyciu operatora modulo
    return num % 2 == 0;
}

bool isEvenConditional(int num) {
    // Funkcja sprawdza, czy liczba jest parzysta przy użyciu operatora warunkowego
    return (num % 2 == 0) ? true : false;
}

int main() {
    int number;

    cout << "Podaj liczbę: ";
    cin >> number;

    cout << "Sprawdzanie bitowe: " << (isEvenBitwise(number) ? "Parzysta" : "Nieparzysta") << endl;
    cout << "Sprawdzanie modulo: " << (isEvenModulo(number) ? "Parzysta" : "Nieparzysta") << endl;
    cout << "Sprawdzanie warunkowe: " << (isEvenConditional(number) ? "Parzysta" : "Nieparzysta") << endl;

    return 0;
}
