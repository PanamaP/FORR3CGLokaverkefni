#include "Vidnam.h"


Vidnam::Vidnam(){
    this->ohma = -1;
}

Vidnam::Vidnam(int numer, int staerd, int ohma) : Ihlutir(numer, staerd){
    this->ohma = ohma;
}

int Vidnam::getOhma(){
    return this->ohma;
}

void Vidnam::setOhma(int ohma){
    this->ohma = ohma;
}

void Vidnam::prenta(){
    std::cout << "Viðnám: " << this->getNumer() << ", " << this->getStaerd() << ", " << this->ohma << std::endl;
}