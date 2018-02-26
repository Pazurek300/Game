#include <iostream>
#include "Czlowiek.h"

using namespace std;

class Wojownik :public Czlowiek
{
protected:
    int furia;

public :


    Wojownik(string ="Janusz", string ="Czlowiek", string ="Wojownik",int =3, int =5, int =3, int =1, int =100, int =150, int =1,int =0,int =3, int =0,int =0);
    void wyswietl();

  /*
    int laduj_furia();
    int slowianski_przykuc();
    int ciecie_toporem();
    int szarza();
    int sierpowy();
    int pierdniecie();

*/
};
