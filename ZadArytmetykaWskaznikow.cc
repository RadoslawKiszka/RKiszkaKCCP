#include <iostream>
using namespace std;

void Funkcja1() {
    int tab[] = {10, 20, 30};
    int *p = tab;
    
    cout << "Funkcja1:" << endl;

    p++;
    cout << "*p = " << *p << endl;

    ++p;
    cout << "*p = " << *p << endl;

    ++*p;
    cout << "*p = " << *p << endl;

    ++(*p);
    cout << "*p = " << *p << endl;

    ++*(p);
    cout << "*p = " << *p << endl;

    cout << "*p++ = " << *p++ << endl;

    (*p)++;
    cout << "*p = " << *p << endl;

    cout << "*p++ = " << *p++ << endl;

    cout << "*++p = " << *++p << endl;

    cout << "*p = " << *p << endl;
}

void Funkcja2() {
    int a = 0, b = 0, c = 0;

    int *p = &a;
    int *q = &b;
    int *r = &c;

    cout << "A, B, C: " << a << " " << b << " " << c << endl;

    *p += 10;
    *q += 10;
    cout << "A, B, C: " << a << " " << b << " " << c << endl;

    *p += 10;
    *q += 10;
    cout << "A, B, C: " << a << " " << b << " " << c << endl;

    *p += 10;
    *q += 10;
    cout << "A, B, C: " << a << " " << b << " " << c << endl;

    *p += 10;
    *q += 10;
    cout << "A, B, C: " << a << " " << b << " " << c << endl;

    *p += 20;
    *q += 20;
    cout << "A, B, C: " << a << " " << b << " " << c << endl;

    *p += 10;
    *q += 10;
    cout << "A, B, C: " << a << " " << b << " " << c << endl;

    *p += 10;
    *q += 10;
    cout << "A, B, C: " << a << " " << b << " " << c << endl;

    *p += 10;
    *q += 10;
    cout << "A, B, C: " << a << " " << b << " " << c << endl;

    *p += 20;
    *q += 10;
    cout << "A, B, C: " << a << " " << b << " " << c << endl;

    *p += 20;
    *q += 10;
    cout << "A, B, C: " << a << " " << b << " " << c << endl;
}

int main() {
    cout << "Funkcja1:" << endl;
    Funkcja1();
    cout << endl;

    cout << "Funkcja2:" << endl;
    Funkcja2();

    return 0;
}
