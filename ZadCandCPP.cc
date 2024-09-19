#include <iostream>
#include <cstdio>  // Dla funkcji C
#include <iomanip> // Dla manipulacji strumieniem w C++

using namespace std;

int main() {
    // Operacje w języku C
    printf("Operacje w C:\n");

    // Operacje matematyczne
    int a = 5, b = 10;
    printf("a = %d, b = %d\n", a, b);
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n", a % b); // %% w printf() oznacza znak %

    // Operacje na zmiennych typu float
    float x = 5.6789;
    printf("x = %.2f\n", x);

    // Operacje na zmiennych typu float z precyzją
    printf("x = %.4f\n", x);

    // Operacje w języku C++
    cout << "Operacje w C++:\n";

    // Operacje matematyczne
    int c = 5, d = 10;
    cout << "c = " << c << ", d = " << d << endl;
    cout << "c + d = " << c + d << endl;
    cout << "c - d = " << c - d << endl;
    cout << "c * d = " << c * d << endl;
    cout << "c / d = " << c / d << endl;
    cout << "c % d = " << c % d << endl;

    // Operacje na zmiennych typu float
    float y = 5.6789;
    cout << fixed << setprecision(2);
    cout << "y = " << y << endl;

    // Operacje na zmiennych typu float z precyzją
    cout << fixed << setprecision(4);
    cout << "y = " << y << endl;

    return 0;
}
