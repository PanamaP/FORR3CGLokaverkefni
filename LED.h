#pragma once

#include "Ihlutir.h"

class LED : public Ihlutir{
  private:
    std::string litur;
  public:
    LED();
    LED(int numer, int staerd, std::string litur);
    std::string getLitur();
    void setLitur(std::string litur);
    void prenta();

};