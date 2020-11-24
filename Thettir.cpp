#include "Thettir.h"

Thettir::Thettir(){
    this->rymd = 0.0;
}

Thettir::Thettir(int numer, int staerd, double rymd) : Ihlutir(numer, staerd){
    this->rymd = rymd;
}

double Thettir::getRymd(){
    return this->rymd;
}

void Thettir::setRymd(double rymd){
    this->rymd = rymd;
}

void Thettir::prenta(){
    if(this->rymd  == 0.001){
        std::cout << "Þéttir: " << this->getNumer() << ", " << this->getStaerd() << ", " << "1mF" << std::endl;
    } else if(this->rymd == 0.00001){
        std::cout << "Þéttir: " << this->getNumer() << ", " << this->getStaerd() << ", " << "10µF" << std::endl;

    }else
        std::cout << "Þéttir: " << this->getNumer() << ", " << this->getStaerd() << ", " << this->rymd << std::endl;
}