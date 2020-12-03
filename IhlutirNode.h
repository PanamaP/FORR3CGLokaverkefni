#pragma once

#include "Ihlutir.h"

struct IhlutirNode {
    Ihlutir* ihlutir;
    IhlutirNode* next;
    IhlutirNode(Ihlutir* ihlutir){
        this->ihlutir = ihlutir;
        this->next = nullptr;
    }
};
