#include <iostream>
using namespace std;

// Definiowanie makra
#define PI 3.14159
#define ADD(x, y) ((x) + (y))
#define STRINGIFY(x) #x
#define CONCAT(a, b) a ## b

// Użycie dyrektyw preprocesora
#ifdef DEBUG
    #define LOG(msg) cout << "DEBUG: " << msg << endl;
#else
    #define LOG(msg) // Brak działania w trybie bez DEBUG
#endif

#ifndef VERSION
    #define VERSION "1.0"
#endif

int main() {
    int a = 5, b = 10;

    // Wyświetlanie użycia makr
    cout << "Pi = " << PI << endl;
    cout << "Sum of a and b = " << ADD(a, b) << endl;
    
    // Użycie STRINGIFY
    cout << "Stringified PI = " << STRINGIFY(PI) << endl;
    
    // Użycie CONCAT
    int xy = 42;
    cout << "Value of xy = " << CONCAT(x, y) << endl;
    
    // Użycie LOG
    LOG("This is a debug message");

    // Wyświetlanie wersji
    cout << "Version: " << VERSION << endl;

    return 0;
}
