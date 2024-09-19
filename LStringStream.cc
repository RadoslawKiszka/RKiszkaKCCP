#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    // Przykład 1: Konwersja liczby całkowitej na string
    int number = 123;
    stringstream ss;
    ss << number;
    string numberStr = ss.str();
    cout << "Liczba jako string: " << numberStr << endl;

    // Przykład 2: Konwersja string na liczby
    stringstream ss2("456");
    int extractedNumber;
    ss2 >> extractedNumber;
    cout << "Liczba odczytana ze stringa: " << extractedNumber << endl;

    // Przykład 3: Formatowanie stringów
    stringstream ss3;
    double pi = 3.14159;
    ss3 << "Wartość Pi: " << pi;
    string formattedString = ss3.str();
    cout << formattedString << endl;

    // Przykład 4: Rozdzielanie stringa na części
    stringstream ss4("To jest przykładowy tekst.");
    string word;
    cout << "Rozdzielanie tekstu na słowa:" << endl;
    while (ss4 >> word) {
        cout << word << endl;
    }

    return 0;
}
