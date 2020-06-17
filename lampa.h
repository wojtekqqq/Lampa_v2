#include <iostream>

using namespace std;
//---------------------------------------------------------------------------

class zarowka
{
private:
    int moc;
    int napiecie;

public:
    zarowka(int M_znam, int U_znam){
        moc = M_znam;
        napiecie = U_znam;
        }

void zasilanie(float ile_volt);
};
//---------------------------------------------------------------------------

class lampa
{
private:
    static const int ile_oprawek = 5;
    zarowka *wsk_zar[ile_oprawek];
    bool wlaczona[ile_oprawek];
    float napiecie_zasilania;

public:
    lampa(){
        for(int i = 0; i < ile_oprawek; i++){ 
            wsk_zar[i] = NULL;
            wlaczona[i] = false;
            }
        napiecie_zasilania = 30;
        }
    ~lampa(){
        for(int i = 0; i < ile_oprawek; i++){ 
            delete [] wsk_zar[i];
            wsk_zar[i] = NULL;            
            }    
        }
void wkrec_zarowke(int ID_oprawki, int moc, int napiecie);
void przelacznik(int ID_oprawki, bool pozycja);
void pokretlo(float nastawa);
void testuj();
};
//---------------------------------------------------------------------------

