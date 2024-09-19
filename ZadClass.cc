#include <iostream>
using namespace std;

// Deklaracja klasy
class MyClass {
public:
    // Publiczna zmienna
    int publicVar;

    // Konstruktor
    MyClass(int p, int q, int r) : publicVar(p), privateVar(q), protectedVar(r) {}

    // Deklaracja i definicja metody inline w klasie
    inline void showPublicVar() {
        cout << "Public Variable: " << publicVar << endl;
    }

    // Deklaracja metody, definicja poza klasą
    void setPublicVar(int value);

    // Funkcja mająca dostęp do prywatnych i chronionych zmiennych
    void accessPrivateAndProtected();

private:
    // Prywatna zmienna
    int privateVar;

    // Prywatna metoda
    inline void showPrivateVar() {
        cout << "Private Variable: " << privateVar << endl;
    }

protected:
    // Chroniona zmienna
    int protectedVar;

    // Chroniona metoda
    inline void showProtectedVar() {
        cout << "Protected Variable: " << protectedVar << endl;
    }
};

// Definicja metody poza klasą
void MyClass::setPublicVar(int value) {
    publicVar = value;
}

// Funkcja mająca dostęp do prywatnych i chronionych zmiennych
void MyClass::accessPrivateAndProtected() {
    showPrivateVar();    // Dostęp do prywatnej metody
    showProtectedVar();  // Dostęp do chronionej metody
}

int main() {
    // Tworzenie obiektu klasy
    MyClass obj(10, 20, 30);

    // Dostęp do publicznej zmiennej
    obj.showPublicVar();
    obj.setPublicVar(50);
    obj.showPublicVar();

    // Dostęp do prywatnych i chronionych zmiennych przez funkcję klasy
    obj.accessPrivateAndProtected();

    return 0;
}
