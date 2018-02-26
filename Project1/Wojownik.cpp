#include <iostream>
#include "Czlowiek.h"
#include "Wojownik.h"

using namespace std;

Wojownik::Wojownik(string n, string r, string p,int d, int s, int z, int i, int w, int h, int l,int e,int pan,int pkt, int fur)
    :Czlowiek(n,r,p,d,s,z,i,w,h,l,e,pan,pkt)
    {
    furia=fur;
    }



void Wojownik::wyswietl()
{
    Czlowiek::wyswietl();
  //  cout<<"Punkty furii: "<<furia<<endl;
}



