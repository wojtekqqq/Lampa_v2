#include <iostream>
#include <cstdlib>
#include "lampa.h"

using namespace std;

int main(int argc, char** argv) {

lampa sufitowa;
cout << "\nWkrecamy zarowki...\n";
sufitowa.wkrec_zarowke(0, 150, 250);
sufitowa.wkrec_zarowke(1, 60, 220);
sufitowa.wkrec_zarowke(2, 75, 250);
sufitowa.wkrec_zarowke(2, 75, 250);

cout << "\nNajpierw wlaczymy pierwsza:\n";
sufitowa.przelacznik(0, true);

cout << "\nTeraz podkrecimy potencjometr do polowy:\n";
sufitowa.pokretlo(50);

cout << "\nCzas wlaczyc druga zarowke:\n";
sufitowa.przelacznik(1, true);

cout << "\nPodjaramy na maksa!\n";
sufitowa.pokretlo(100);

cout << "\nWylaczmy druga zarowke:\n";
sufitowa.przelacznik(1, false);

cout << "\nDobranoc...\n";
sufitowa.pokretlo(0);

cout << endl; system ("pause"); return 0;
}
