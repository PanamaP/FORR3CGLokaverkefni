#include "Ihlutir.h"

Ihlutir::Ihlutir(){
    this->numer = -1;
    this->staerd = -1;
}

Ihlutir::Ihlutir(int numer, int staerd){
    this->numer = numer;
    this->staerd = staerd;
}

int Ihlutir::getNumer(){
    return this->numer;
}

void Ihlutir::setNumer(int numer){
    this->numer = numer;
}

int Ihlutir::getStaerd(){
    return this->staerd;
}

void Ihlutir::setStaerd(int staerd){
    this->staerd = staerd;
}

void Ihlutir::prenta(){
    std::cout << "Íhlutur: " << this->numer << ", " << this->staerd << std::endl;
}


bool Ihlutir::operator<(Ihlutir& other){
    if(this->numer == other.numer){
        return this->staerd < other.staerd;
    } else {
        return this->numer < other.numer;
    }
}
bool Ihlutir::operator>(Ihlutir& other){
    return other < *this;
}
bool Ihlutir::operator<=(Ihlutir& other){
    return !(*this > other);
}
bool Ihlutir::operator>=(Ihlutir& other){
    return !(*this < other);
}