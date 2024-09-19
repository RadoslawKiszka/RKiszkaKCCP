#include <iostream>
using namespace std;

bool isEvenBitwise(int num) {
    return (num & 1) == 0;
}

bool isEvenModulo(int num) {
    return num % 2 == 0;
}

bool isEvenConditional(int num) {
    return (num % 2 == 0) ? true : false;
}

int main() {
    int number, choice;

    cout << "Podaj liczbę: ";
    cin >> number;

    cout << "Wybierz metodę sprawdzania parzystości:\n";
    cout << "1. Bitwise AND\n";
    cout << "2. Modulo\n";
    cout << "3. Operator warunkowy\n";
    cout << "Twój wybór (1/2/3): ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Sprawdzanie bitowe: " << (isEvenBitwise(number) ? "Parzysta" : "Nieparzysta") << endl;
            break;
        case 2:
            cout << "Sprawdzanie modulo: " << (isEvenModulo(number) ? "Parzysta" : "Nieparzysta") << endl;
            break;
        case 3:
            cout << "Sprawdzanie warunkowe: " << (isEvenConditional(number) ? "Parzysta" : "Nieparzysta") << endl;
            break;
        default:
            cout << "Nieprawidłowy wybór." << endl;
    }

    return 0;
}
