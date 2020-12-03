#pragma once

#include <iostream>
#include <string>

#include "IhlutirNode.h"
#include "Ihlutir.h"
#include "LED.h"
#include "Vidnam.h"
#include "Thettir.h"

class allt {
    private:
        IhlutirNode** table;
        int staerd;
        int hash(int numer);
    public:
        allt();
        allt(int staerd);
        void listaIhlut(Ihlutir* ihlutir);
        void listaLED(int numer, int staerd, std::string litur);
        void listaThettir(int numer, int staerd, double rymd);
        void listaVidnam(int numer, int staerd, int ohma);
        Ihlutir* saekjahlut(int numer);
        void prenta();
        ~allt();
};