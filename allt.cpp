#include "Allt.h"

int allt::hash(int numer){
    return numer % this->staerd;
}

allt::allt(){
    this->staerd = 5;
    this->table = new IhlutirNode*[this->staerd]();
}

allt::allt(int staerd){
    this->staerd = staerd;
    this->table = new IhlutirNode*[this->staerd]();
}

void allt::listaIhlut(Ihlutir* ihlutir){
    // á að finna rétta sætið í fylkinu 
    //og setur á réttan stað í þeim keðjulista
    int index = this->hash(ihlutir->getNumer());
    IhlutirNode* newNode = new IhlutirNode(ihlutir);
    if(this->table[index] == nullptr){
        this->table[index] == newNode;
    } else {
        if(this->table[index]->ihlutir > newNode->ihlutir){
            newNode->next = this->table[index];
            this->table[index] = newNode;
        } else {
            IhlutirNode* current = this->table[index];
            IhlutirNode* prev = this->table[index];
            while(current != nullptr && current->ihlutir <= newNode->ihlutir){
                prev = current;
                current = current->next;
            }
            newNode->next = current;
            prev->next = newNode;
        }
    }

}


void allt::listaLED(int numer, int staerd, std::string litur){
    this->listaIhlut(new LED(numer, staerd, litur));
}

void allt::listaThettir(int numer, int staerd, double rymd){
    this->listaIhlut(new Thettir(numer, staerd, rymd));
}

void allt::listaVidnam(int numer, int staerd, int ohma){
    this->listaIhlut(new Vidnam(numer, staerd, ohma));
}

Ihlutir* allt::saekjahlut(int numer){
    int index = this->hash(numer);
    if(this->table[index]->ihlutir->getNumer() == numer){
        Ihlutir* skila = this->table[index]->ihlutir;
        IhlutirNode* newHead = this->table[index]->next;
        delete this->table[index];
        this->table[index] = newHead;
        return skila;
    } else {
        IhlutirNode* current = this->table[index];
        IhlutirNode* prev = this->table[index];
        while(current != nullptr && current->ihlutir->getNumer() != numer){
            prev = current;
            current = current->next;
        }
        if(current != nullptr){
            Ihlutir* skila = current->ihlutir;
            prev->next = current->next;
            delete current;
            return skila;
        }
    }
    //return Ihlutir();
}

void allt::prenta(){
    for(int i = 0; i < this->staerd; i++){
        IhlutirNode* current = this->table[i];
        while(current != nullptr){
            std::cout << "Hylki " << i << ": ";
            current->ihlutir->prenta();
            current = current->next;
        }
    }
}
allt::~allt(){
    IhlutirNode* newHead;
    for(int i = 0; i < this->staerd; i++){
        while(this->table[i] != nullptr){
            newHead = this->table[i]->next;
            delete this->table[i];
            this->table[i] = newHead;
        }
    }
}