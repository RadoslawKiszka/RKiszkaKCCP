#include <iostream>
using namespace std;

enum miesiace {
    Styczen,
    Luty,
    Marzec,
    Kwiecien,
    Maj,
    Czerwiec,
    Lipiec,
    Sierpien,
    Wrzesien,
    Pazdziernik,
    Listopad,
    Grudzien
};

namespace MiesiaceScoped {
    enum miesiace {
        Styczen,
        Luty,
        Marzec,
        Kwiecien,
        Maj,
        Czerwiec,
        Lipiec,
        Sierpien,
        Wrzesien,
        Pazdziernik,
        Listopad,
        Grudzien
    };
}

namespace MiesiaceUnscoped {
    enum miesiace {
        Styczen,
        Luty,
        Marzec,
        Kwiecien,
        Maj,
        Czerwiec,
        Lipiec,
        Sierpien,
        Wrzesien,
        Pazdziernik,
        Listopad,
        Grudzien
    };
}

int main()
{
    // Użycie miesięcy z przestrzeni nazw "MiesiaceScoped"
    MiesiaceScoped::miesiace var1 = MiesiaceScoped::Styczen;

    // Użycie miesięcy z przestrzeni nazw "MiesiaceUnscoped"
    MiesiaceUnscoped::miesiace var2 = MiesiaceUnscoped::Styczen;

    return 0;
}

