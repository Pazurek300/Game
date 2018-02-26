#include <iostream>
#include "Czlowiek.h"

using namespace std;

class Lotrzyk :public Czlowiek
{
    string nazwa;
    int energia;

public :
    int regeneracja_hp();
    int regeneracja_energia();

};
