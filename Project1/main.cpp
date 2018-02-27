#include <iostream>
#include "Czlowiek.h"
#include "Wojownik.h"
using namespace std;

int main()
{
    Wojownik w1;
    int a=1;
    while (a!=0)
    {
		system("cls");
        cout << "Wybierz opcje: "<<endl;
        cout << "1.Zmien nazwe postaci: "<<endl;
        cout << "2.Wyswietl statystyki postaci: "<<endl;
		cout << "3.Zyskaj doswiadczenie." << endl;
		cout << "4.Przydziel punkty statystyk: " << endl;
		cout << endl;
		cout << "0. Exit" << endl;
        cin >> a;
        switch(a)
        {
        case 0:
            return 0;
            break;
        case 1:
            w1.podaj_nazwe();
            break;
        case 2:
            w1.wyswietl();
            break;
		case 3:
			w1.zdobadz_exp();
			break;
		case 4:
			w1.przydziel_punkty();
			break;
        }
    }

}
