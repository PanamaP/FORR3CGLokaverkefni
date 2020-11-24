#pragma once

#include "Ihlutir.h"


class Thettir : public Ihlutir{
    private:
        double rymd;
    public:
        Thettir();
        Thettir(int numer, int staerd, double rymd);
        double getRymd();
        void setRymd(double rymd);
        void prenta();
};