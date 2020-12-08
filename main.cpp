#include "Ihlutir.h"
#include "Vidnam.h"
#include "Thettir.h"
#include "LED.h"
#include "Allt.h"

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(){

    //CRUD
    // skrá íhlut(LED, Viðnám, Þéttir)
    // example : skrá LED 905 5 Grænn
    // prenta
    // eyða "nr"
    // breyta "nr" "litur"
    // hætta
    // hjalp - info um skipanir

    string inntak, skipun, ihlutur, litur, hjalp, stadfesting;
    int numer, staerd, ohma;
    double rymd;


    Allt a;

    do {
        cout << "Sláðu inn skipun: ";
        getline(cin, inntak);

        stringstream ss;
        ss << inntak;

        ss >> skipun;
        if(skipun == "skrá"){
            ss >> ihlutur;
            if(ihlutur == "LED"){
                ss >> numer >> staerd >> litur;
                a.listaLED(numer, staerd, litur);
            } else if(ihlutur == "Viðnám"){
                ss >> numer >> staerd >> ohma;
                a.listaVidnam(numer, staerd, ohma);
            } else if(ihlutur == "Þéttir"){
                ss >> numer >> staerd >> rymd;
                a.listaThettir(numer, staerd, rymd);
            } else {
                cout << "Get ekki skráð " << ihlutur << "!!" << endl;
                cout << "Passa stafsetningu!" << endl;
            }
        } else if(skipun == "prenta"){
            a.prenta();
        } else if(skipun == "breyta"){
            ss >> numer >> litur;
            ss >> stadfesting;
            if(stadfesting == "já"){
                if(!a.breytaLit(numer, litur)){
                    cout << "Fann ekki íhlut með númeri: " << numer << "!!" << endl;
                    break;

                } else {
                    cout << "Breytt lit í " << litur << "." << endl;
                }
            } else {
                cout << " " << endl;
                cout << "Þú ert að fara yfirskrifa breytuna." << endl;
                cout << "Ef þú villt breyta litnum bættu við 'já' á endan." << endl;
                cout << " " << endl;
                cout << "Hætt hefur verið við." << endl;
                cout << " " << endl;
                
            }
        
        } else if(skipun == "eyða"){
            ss >> numer;
            if(!a.eydahlut(numer)){
                cout << "Fann ekki íhlut með númeri: " << endl;
            } else {
                cout << "íhluti hefur verið eytt." << endl;
            }
        } else if(skipun == "hjálp"){
            cout << "skrá" << endl;
            cout << "skráir íhluti." << endl;
            cout << "template: skrá íhlutur númer stærð Litur/ohma/rýmd" << endl;
            cout << "valkostir: LED, Viðnám, Þéttir" << endl;
            cout << "Dæmi: skrá LED 901 5 Grænn" << endl;
            cout << "" << endl;

            cout << "prenta" << endl;
            cout << "prentar alla skráða íhluti." << endl;
            cout << "" << endl;

            cout << "breyta" << endl;
            cout << "breytir lit hjá íhlut." << endl;
            cout << "passa að íhlutur sé LED, þetta mun skrifa yfir fyrra fallið annars." << endl;
            cout << "template: breyta númer litur" << endl;
            cout << "valkostir: allir litir" << endl;
            cout << "Dæmi: breyta 901 blár já" << endl;
            cout << "" << endl;

            cout << "eyða" << endl;
            cout << "eyðir íhlut." << endl;
            cout << "template: eyða númer" << endl;
            cout << "Dæmi: eyða 901" << endl;
            cout << "" << endl;
    
        }


    } while(skipun !="hætta");







    /*
    a.listaVidnam(901, 5, 4);

    a.listaLED(902, 5, "red");
    
    a.listaThettir(903, 4, 0.0001);

    a.saekjahlut(902)->prenta();
    
    a.prenta();
    
    a.eydahlut(901);
    a.breytaLit(902, "Blar")->prenta();
    a.prenta();
    
    Vidnam v = Vidnam(900, 5, 220);
    v.prenta();

    Thettir t = Thettir(901, 6, 0.001);
    t.prenta();

    Thettir t2 = Thettir(904, 6, 0.00001);
    t2.prenta();

    Ihlutir i = Ihlutir(902, 7);
    i.prenta();
    
    LED l = LED(903, 8, "Blár");
    l.prenta(); 



    LED(900, 5, "Rautt");
    LED(901, 5, "Gult");
    LED(902, 5, "Rautt");
    LED(903, 3, "Rautt");
    
    Vidnam(904, 3, 220);
    Vidnam(905, 1, 1000);
    Vidnam(906, 3, 5000);

    Thettir(907, 2, 0.000001);
    Thettir(908, 2, 0.0025);
    Thettir(909, 6, 0.1);
    */

    return 0;
}