#include <iostream>
using namespace std;

void OperatoryArytmetyczne() {
    int a = 10, b = 5;
    
    cout << "Operatory arytmetyczne:" << endl;
    
    cout << "a = " << a << ", b = " << b << endl;
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;
    cout << "a % b = " << a % b << endl;
    cout << "a++ = " << a++ << ", a = " << a << endl;
    cout << "++a = " << ++a << endl;
    cout << "a-- = " << a-- << ", a = " << a << endl;
    cout << "--a = " << --a << endl;
}

void OperatoryPrzypisania() {
    int a = 10, b = 5;

    cout << "Operatory przypisania:" << endl;
    
    cout << "a = " << a << ", b = " << b << endl;
    
    a += b;
    cout << "a += b -> a = " << a << endl;
    
    a -= b;
    cout << "a -= b -> a = " << a << endl;
    
    a *= b;
    cout << "a *= b -> a = " << a << endl;
    
    a /= b;
    cout << "a /= b -> a = " << a << endl;
    
    a %= b;
    cout << "a %= b -> a = " << a << endl;
    
    a &= b;
    cout << "a &= b -> a = " << a << endl;
    
    a |= b;
    cout << "a |= b -> a = " << a << endl;
    
    a ^= b;
    cout << "a ^= b -> a = " << a << endl;
    
    a <<= 1;
    cout << "a <<= 1 -> a = " << a << endl;
    
    a >>= 1;
    cout << "a >>= 1 -> a = " << a << endl;
}

int main() {
    OperatoryArytmetyczne();
    cout << endl;
    OperatoryPrzypisania();

    return 0;
}
