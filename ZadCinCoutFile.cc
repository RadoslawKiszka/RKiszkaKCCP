#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string data;

    cout << "Podaj dane do zapisania: ";
    getline(cin, data);

    cerr << "Błąd: Wprowadzone dane są: " << data << endl;

    ofstream outFile("output.txt");
    if (!outFile) {
        cerr << "Nie można otworzyć pliku do zapisu!" << endl;
        return 1;
    }
    outFile << data << endl;
    outFile.close();

    ifstream inFile("output.txt");
    if (!inFile) {
        cerr << "Nie można otworzyć pliku do odczytu!" << endl;
        return 1;
    }
    string fileContent;
    getline(inFile, fileContent);
    inFile.close();

    cout << "Zawartość pliku 'output.txt': " << fileContent << endl;

    return 0;
}
