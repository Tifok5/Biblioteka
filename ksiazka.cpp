#include <iostream>
#include "ksiazka.h"
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;

void Ksiazka::wczytaj()
{
    fstream plik;
    plik.open("biblioteka.txt", ios::in);
    if (plik.good() == false)
    {
        cout << "Nie udalo sie otworzyc pliku!";
        exit(0);
    }
    int nr_linii = (nr_ksiazki - 1) * 3 + 1;
    int aktualny_nr = 1;
    string linia;
    while (getline(plik, linia))
    {
        if (aktualny_nr == nr_linii) tytul = linia;
        if (aktualny_nr == nr_linii + 1) autor = linia;
        if (aktualny_nr == nr_linii + 2) liczba_stron = linia;
        aktualny_nr++;
    }
    plik.close();
}

void Ksiazka::wyswietl()
{
    cout << nr_ksiazki << "." << "\n";
    cout << "Tytul: " << tytul << "\n";
    cout << "Autor: " << autor << "\n";
    cout << "Liczba stron: " << liczba_stron << "\n\n";
}