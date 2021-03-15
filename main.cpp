#include <iostream>
#include "ksiazka.h"
using namespace std;

int main()
{
    while (true)
    {
        cout << "***************************\n";
        cout << "*** WITAJ W BIBLIOTECE! ***\n";
        cout << "***************************\n\n";
        cout << "Wybierz jedna z dostepnych opcji:\n";
        cout << "1. Lista dostepnych ksiazek\n";
        cout << "2. Wypozycz ksiazke\n";
        cout << "3. Zwroc ksiazke\n";
        cout << "4. Wyjdz\n";
        int opcja;
        cin >> opcja;
        if (opcja == 1)
        {
            cout << "\nLista dostepnych ksiazek:\n\n";
            Ksiazka lista[10];
            for (int i = 0; i < 10; i++)
            {
                lista[i].nr_ksiazki = i + 1;
                lista[i].wczytaj();
                lista[i].wyswietl();
            }
        }
        else if (opcja == 4) exit(0);
    }
    return 0;
}
