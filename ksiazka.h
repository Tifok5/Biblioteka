#include <iostream>
using namespace std;

class Ksiazka
{
public:
	int nr_ksiazki;
	string tytul;
	string autor;
	string liczba_stron;
	void wczytaj(); //wczytuje ksiazki z pliku
	void wyswietl(); //wyswietla ksiazki na ekranie
};