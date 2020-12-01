#pragma once

#include "Ihlutir.h"

struct IhlutirNode {
    Ihlutir* ihlutir;
    IhlutirNode* next;
    IhlutirNode(Ihlutir* nyrHlutur){
        this->ihlutir = nyrHlutur;
        this->next = nullptr;
    }
};
