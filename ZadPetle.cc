#include <iostream>
using namespace std;

void testWhile() {
    cout << "Test while (i++, ++i):" << endl;
    int i = 0;
    
    cout << "Inkrementacja i++:" << endl;
    while (i < 5) {
        cout << "i = " << i << endl;
        i++;
    }
    
    i = 0;
    cout << "Inkrementacja ++i:" << endl;
    while (i < 5) {
        cout << "i = " << ++i << endl;
    }
}

void testDoWhile() {
    cout << "Test do-while (i++, ++i):" << endl;
    int i = 0;
    
    cout << "Inkrementacja i++:" << endl;
    do {
        cout << "i = " << i << endl;
        i++;
    } while (i < 5);
    
    i = 0;
    cout << "Inkrementacja ++i:" << endl;
    do {
        cout << "i = " << ++i << endl;
    } while (i < 5);
}

void testFor() {
    cout << "Test for (break, continue, return):" << endl;
    
    cout << "Using break:" << endl;
    for (int i = 0; i < 10; i++) {
        if (i == 5) {
            break;
        }
        cout << "i = " << i << endl;
    }

    cout << "Using continue:" << endl;
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            continue;
        }
        cout << "i = " << i << endl;
    }

    cout << "Using return:" << endl;
    for (int i = 0; i < 10; i++) {
        if (i == 7) {
            return; // Ends the program execution
        }
        cout << "i = " << i << endl;
    }
}

int main() {
    testWhile();
    testDoWhile();
    testFor();
    return 0;
}
