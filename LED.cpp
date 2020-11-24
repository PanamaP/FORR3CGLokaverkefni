#include "LED.h"

LED::LED(){
    this->litur = " ";
}

LED::LED(int numer, int staerd, std::string litur) : Ihlutir(numer, staerd){
    this->litur = litur;
}

std::string LED::getLitur(){
    return this->litur;
}


void LED::setLitur(std::string litur){
    this->litur = litur;
}

void LED::prenta(){
    std::cout << "LED: " << this->getNumer() << ", " << this->getStaerd() << ", " << this->litur << std::endl;
}