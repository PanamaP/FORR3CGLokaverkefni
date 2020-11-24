#include "Ihlutir.h"
#include "Vidnam.h"
#include "Thettir.h"
#include "LED.h"

#include <iostream>
using namespace std;

int main(){
    Vidnam v = Vidnam(900, 5, 220);
    v.prenta();

    Thettir t = Thettir(901, 6, 0.001);
    t.prenta();

    Ihlutir i = Ihlutir(902, 7);
    i.prenta();

    LED l = LED(903, 8, "Blár");
    l.prenta();
    /*
    LED(900, 5, "Rautt");
    LED(901, 5, "Gult");
    LED(902, 5, "Rautt");
    LED(903, 3, "Rautt");
    */
    
    /*
    Vidnam(904, 3, 220);
    Vidnam(905, 1, 1000);
    Vidnam(906, 3, 5000);
    */
    /*
    Thettir(907, 2, 0.000001);
    Thettir(908, 2, 0.0025);
    Thettir(909, 6, 0.1);
    */

    return 0;
}