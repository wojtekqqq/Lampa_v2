#include "lampa.h"

//----------------- FUNKCJE KLASY ZAROWKA -----------------------------------

void zarowka::zasilanie(float ile_volt)
{
if(ile_volt <= 0){
    cout << "\tCiemnosc widze!\n";
    return;
    }
cout << "\tSwiece z moca " << ile_volt / napiecie * moc << " watt\n";
}
//------------------ FUNKCJE KLASY LAMPA ------------------------------------

void lampa::wkrec_zarowke(int ID_oprawki, int moc, int napiecie)
{
if(!wsk_zar[ID_oprawki]) wsk_zar[ID_oprawki] = new zarowka(moc, napiecie);
else  cout << "\tW oprawce " << ID_oprawki << " jest inna zarowka\n";
}
//---------------------------------------------------------------------------

void lampa::przelacznik(int ID_oprawki, bool pozycja)
{
wlaczona[ID_oprawki] = pozycja;
testuj();
}
//---------------------------------------------------------------------------

void lampa::pokretlo(float nastawa)
{
nastawa = (nastawa > 100) ? 100 : nastawa;
nastawa = (nastawa < 0) ? 0 : nastawa;

napiecie_zasilania = nastawa / 100 * 240;
testuj();
}
//---------------------------------------------------------------------------

void lampa::testuj()
{
for (int i = 0; i < ile_oprawek; i++){
    if(wsk_zar[i]){ 
        cout << "\tZarowka nr " << i << ": ";
        wsk_zar[i]->zasilanie(wlaczona[i] ? napiecie_zasilania : 0);
        }
    }
}
//---------------------------------------------------------------------------
