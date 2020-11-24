#pragma once

#include "Ihlutir.h"

class Vidnam : public Ihlutir{
    private:
        int ohma;
    public:
        Vidnam();
        Vidnam(int numer, int staerd, int ohma);
        int getOhma();
        void setOhma(int ohma);
        void prenta();
};
