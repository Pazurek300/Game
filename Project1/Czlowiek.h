#include <iostream>
#include <string>
#pragma once

using namespace std;

class Czlowiek
{
protected:
    string nazwa;
    string rasa;
    string profesja;
    int dmg;
    int sila;
    int zrecznosc;
    int inteligencja;
    int wytrzymalosc;
    int hp;
    int level;
    int exp;
    int pancerz;
	int punkty;

public :


    Czlowiek(string ="Bezimienny", string ="Czlowiek", string ="Brak",int =1, int =0, int =0, int =0, int =100, int =100, int =1,int =0,int =0,int =0);
    void wyswietl();
    void podaj_nazwe();
	void zdobadz_exp();
	void przydziel_punkty();
	void menu();
   /* int dodaj_wojownika();
    virtual int atak()=0;
    int dodaj_statystyke();
*/

};
