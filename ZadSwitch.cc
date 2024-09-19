#include <iostream>
#include <string>
using namespace std;

void checkWord(const string& word) {
    if (word == "parzysta") {
        cout << "Słowo 'parzysta' zostało wybrane." << endl;
    } else if (word == "nieparzysta") {
        cout << "Słowo 'nieparzysta' zostało wybrane." << endl;
    } else if (word == "inny") {
        cout << "Słowo 'inny' zostało wybrane." << endl;
    } else {
        cout << "Nieznane słowo." << endl;
    }
}

int main() {
    string input;
    
    cout << "Podaj słowo (parzysta, nieparzysta, inny): ";
    cin >> input;
    
    // Normalizacja wejścia do małych liter, aby uniknąć problemów z wielkością liter
    for (char &c : input) {
        c = tolower(c);
    }
    
    // Wybór działania w zależności od wartości słowa
    switch (input[0]) { // Użycie pierwszego znaku słowa dla uproszczenia przykładu
        case 'p':
            if (input == "parzysta") {
                cout << "Słowo 'parzysta' zostało wybrane." << endl;
            } else {
                cout << "Nieznane słowo." << endl;
            }
            break;
        case 'n':
            if (input == "nieparzysta") {
                cout << "Słowo 'nieparzysta' zostało wybrane." << endl;
            } else {
                cout << "Nieznane słowo." << endl;
            }
            break;
        case 'i':
            if (input == "inny") {
                cout << "Słowo 'inny' zostało wybrane." << endl;
            } else {
                cout << "Nieznane słowo." << endl;
            }
            break;
        default:
            cout << "Nieznane słowo." << endl;
            break;
    }
    
    return 0;
}
