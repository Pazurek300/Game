#include <iostream>
#include "Czlowiek.h"

using namespace std;

class Lotrzyk :public Czlowiek
{
    string nazwa;
    int mana;

public :
    int regeneracja_hp();
    int regeneracja_mana();

};
