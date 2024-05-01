/*
  Zadanie podczas zajęć:
   *   Napisz funkcje (osobny program) w którym zadeklarujesz string i uzyjesz na nim funkcji manipulacyjnych:
   *   1. empty() 	Zwraca wartość true jeżeli napis jest pusty.
   *   2. size(),length() 	Zwraca ilość znaków w napisie.
   *   3. at() 	Zwraca znak o podanym położeniu, tak jak operator [], z tym że ta metoda jest bezpieczniejsza - wyrzuca wyjątek w przypadku wyjścia poza zakres stringa.
   *   4. clear() 	Usuwa wszystkie znaki z napisu.
   *   5. erase(...) 	Usuwa wybrane znaki.
   *   6. find(...) 	Znajduje podciąg w ciągu, są też bardziej rozbudowane funkcje tego typu.
   *   7. swap(...) 	Zamienia miejscami dwa stringi, a staje się b, a b staje się a.
   *   8. substr(...) 	Zwraca podciąg na podstawie indeksu początkowego i długości podciągu.
   *   9. append(...)
*/

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string tekst= "I'm super Vegeta!";
    
    // empty()
    if(tekst.empty()){
        cout<<"tekst jest pusty\n";
    }
    else{
        cout<<"Tekst nie jest pusty\n";
    }
    
    // size()
    cout<<"Rozmiar tekstu: '"<<tekst<<"' - "<<tekst.size()<<" znakow\n";
    
    // at()
    char znak = tekst.at(10);
    cout<<"Znak na pozycji 10 to: "<<znak<<endl;
    
    /* clear()
    tekst.clear();
    cout<<"rozmiar tekstu po 'clear()' "<<tekst.size()<<" - tekst zostal usuniety ze zmiennej 'tekst'\n";*/
    
    // erase()
    tekst.erase(9,9);
    cout<<"tekst po erase(): "<<tekst<<endl;
    
    // find()
    size_t pozycja = tekst.find("super");
    cout<<"'super' znajduje sie na pozycji: "<<pozycja<<endl;
    
    // append()
    cout<<"Tekst przed append: "<<tekst;
    tekst.append(" Vegeta");
    cout<<"\nTekst po dodaniu: "<<tekst;
    
    // swap()
    string tekst2=" ciastko";
    tekst.swap(tekst2);
    cout<<tekst<<" "<<tekst2<<endl;
    
    // substr()
    string subik = tekst.substr(1,9);
    cout<<subik<<endl;
    return 0;
}
