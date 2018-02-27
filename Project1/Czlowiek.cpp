#include <iostream>
#include "Czlowiek.h"
#include <cstdio>
#include <cstdlib>

using namespace std;

Czlowiek::Czlowiek(string n, string r, string p,int d, int s, int z, int i, int w, int h, int l,int e,int pan,int pkt)
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
		punkty = pkt;

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
	cout <<"Punkty statystyk: " << punkty << endl;
    cout <<"Ilosc doswiadczenia: "<<exp<<endl;
	if (level <= 10)
	{
		cout << "Ilosc doswiadczenia potrzebna do nastepnego poziomu: " << 40 * pow(level, 2) + 360 * level << endl;
	}
	if (level > 10 && level <= 30)
	{
		cout << "Ilosc doswiadczenia potrzebna do nastepnego poziomu: " << 2 * pow(level, 3) + 40 * pow(level, 2) + 396 * level << endl;
	}
	if (level > 30)
	{
		cout << "Ilosc doswiadczenia potrzebna do nastepnego poziomu: " << 2*(65 * pow(level, 2) + 165 * level + 6750) << endl;
	}
	cout << endl;
		system("pause");

}

void Czlowiek::podaj_nazwe()
{
    cout <<"Podaj nazwe postaci: " <<endl;
    cin >>nazwa;
    cout <<endl;
}

void Czlowiek::przydziel_punkty()
{
	int wybor = 0;
	bool stop = false;
	do
	{
		system("cls");
		cout << "1. Zwieksz sile o 1" << endl;
		cout << "2. Zwieksz zrecznosc o 1" << endl;
		cout << "3. Zwieksz inteligencje o 1" << endl;
		cout << "4. Powrot" << endl;
		cin >> wybor;
		switch (wybor)
		{
		case 1:
			if (punkty > 0)
			{
				sila++;
				punkty--;
			}
			else
				cout << "Nie masz punktow statystyk" << endl;
			system("pause");
			break;
		case 2:
			if (punkty > 0)
			{
				zrecznosc++;
				punkty--;
			}
			else
				cout << "Nie masz punktow statystyk" << endl;
			system("pause");
			break;
		case 3:
			if (punkty > 0)
			{
				inteligencja++;
				punkty--;
			}
			else
				cout << "Nie masz punktow statystyk" << endl;
			system("pause");
			break;
		case 4:
			stop = true;
		} 
	} while (punkty != 0 && stop != true );
}

void Czlowiek::zdobadz_exp()
{
		if (level != 60)
		{
			int wspolczynnik_expa = 1;
			exp = exp + 8 * level + 45 * wspolczynnik_expa;
			if (level <= 10)
			{
				if (exp >= 40 * pow(level, 2) + 360 * level)
				{
					exp = exp - (40 * pow(level, 2) + 360 * level);
					level++;
					punkty += 2;
				}
			}
			if (level > 10 && level <= 30)
			{
				if (level > 10 && level <= 20)
				{
					wspolczynnik_expa = 2;
				}
				else
					wspolczynnik_expa = 3;
				if (exp >= 2 * pow(level, 3) + 40 * pow(level, 2) + 396 * level)
				{
					exp = exp - (2 * pow(level, 3) + 40 * pow(level, 2) + 396 * level);
					level++;
					punkty += 2;

				}
			}
			if (level > 30)
			{
				wspolczynnik_expa = 4;
				if (exp >= 2*(65 * pow(level, 2) + 165 * level + 6750))
				{
					exp = exp - 2*(65 * pow(level, 2) + 165 * level + 6750);
					level++;
					punkty += 2;
				}
				if (level > 40 && level <= 50)
				{
					wspolczynnik_expa = 5;
				}
				if (level > 50 && level <= 60)
				{
					wspolczynnik_expa = 6;
				}
			}
		}

}

