#include <iostream>
#include <limits>
using namespace std;

void printBinary(const unsigned char val) {
    for(int i = 7; i >= 0; i--)
        if(val & (1 << i))
            cout << "1";
        else
            cout << "0";
}

int main() {
    unsigned char bitArray[8];
    unsigned char result = 0;

    cout << "Podaj 8 liczb binarnych (0 lub 1) oddzielonych spacją: ";

    for(int i = 0; i < 8; i++) {
        cin >> bitArray[i];
        if(cin.fail() || (bitArray[i] != 0 && bitArray[i] != 1)) {
            cin.clear(); // Czyści stan błędu strumienia
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignoruje pozostałe wejście
            cout << "Wprowadź tylko 0 lub 1." << endl;
            return 1;
        }
    }

    for(int i = 0; i < 8; i++) {
        result |= (bitArray[i] << (7 - i));
    }

    cout << "Wynik w binarnej notacji: ";
    printBinary(result);
    cout << endl;

    return 0;
}
