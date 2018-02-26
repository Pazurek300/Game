#include <iostream>
#include "Czlowiek.h"

using namespace std;

Czlowiek::Czlowiek(string n, string r, string p,int d, int s, int z, int i, int w, int h, int l,int e,int pan)
    {
        nazwa=n;
        rasa=r;
        profesja=p;
        dmg=d;
        sila=s;
        zrecznosc=z;
        inteligencja=i;
        wytrzymalosc=w;
        hp=h;
        level=l;
        exp=e;
        pancerz=pan;
    }


void Czlowiek::wyswietl()
{
    cout <<"Nazwa: "<<nazwa<<endl;
    cout <<"Rasa: "<<rasa<<endl;
    cout <<"Profesja: "<<profesja<<endl;
    cout <<"Sila ataku: "<<dmg<<endl;
    cout <<"Sila: "<<sila<<endl;
    cout <<"Zrecznosc: "<<zrecznosc<<endl;
    cout <<"Inteligencja: "<<inteligencja<<endl;
    cout <<"Wytrzymalosc: "<<wytrzymalosc<<endl;
    cout <<"Zycie: "<<hp<<endl;
    cout <<"Armor: "<<pancerz<<endl;
    cout <<"Poziom: "<<level<<endl;
    cout <<"Ilosc doswiadczenia: "<<exp<<endl;
    cout <<endl;

}

void Czlowiek::podaj_nazwe()
{
    cout <<"Podaj nazwe postaci: " <<endl;
    cin >>nazwa;
    cout <<endl;
}


