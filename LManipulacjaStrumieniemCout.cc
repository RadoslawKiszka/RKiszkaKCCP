#include <iostream>
#include <iomanip> // Dla manipulatorów strumieniowych
using namespace std;

int main() {
    // Przykładowe wartości do formatowania
    float a = 12.345678;
    float b = 123.456789;
    float c = 1.234567;
    float average = (a + b + c) / 3;

    // Wyniki działania
    cout << "==================================================" << endl;
    cout << "Wyniki naszego działania:" << endl;

    // Wyjście 1
    cout << "output: " << setw(7) << setprecision(2) << fixed << a
         << " T: " << setw(7) << setprecision(3) << fixed << b << endl;

    // Wyjście 2
    cout << "output1: " << setw(7) << setprecision(4) << fixed << a
         << " T: " << setw(8) << setprecision(5) << fixed << b << endl;

    // Wyjście 3
    cout << "output2: " << setw(7) << setprecision(4) << fixed << a
         << " T: " << setw(8) << setprecision(6) << fixed << b << endl;

    cout << "---------------------------------" << endl;

    // Średnia
    cout << "average: " << setw(7) << setprecision(4) << fixed << average
         << " T: " << setw(8) << setprecision(6) << fixed << average << endl;

    cout << "==================================================" << endl;

    return 0;
}
