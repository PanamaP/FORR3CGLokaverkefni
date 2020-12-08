#include "Allt.h"

int Allt::hash(int numer){
    return numer % this->staerd;
}

Allt::Allt(){
    this->staerd = 5;
    this->table = new IhlutirNode*[this->staerd]();
}

Allt::Allt(int staerd){
    this->staerd = staerd;
    this->table = new IhlutirNode*[this->staerd]();
}

void Allt::listaIhlut(Ihlutir* ihlutir){
    // á að finna rétta sætið í fylkinu 
    //og setur á réttan stað í þeim keðjulista
    int index = this->hash(ihlutir->getNumer());
    IhlutirNode* newNode = new IhlutirNode(ihlutir);
    if(this->table[index] == nullptr){
        this->table[index] = newNode;
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


void Allt::listaLED(int numer, int staerd, std::string litur){
    this->listaIhlut(new LED(numer, staerd, litur));
}

void Allt::listaThettir(int numer, int staerd, double rymd){
    this->listaIhlut(new Thettir(numer, staerd, rymd));
}

void Allt::listaVidnam(int numer, int staerd, int ohma){
    this->listaIhlut(new Vidnam(numer, staerd, ohma));
}

Ihlutir* Allt::saekjahlut(int numer){
    int index = this->hash(numer);
    
    if(this->table[index]){
        if(this->table[index]->ihlutir->getNumer() == numer){
            return this->table[index]->ihlutir;
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
    }
    return nullptr;
}


Ihlutir* Allt::eydahlut(int numer){
    int index = this->hash(numer);
    
    if(this->table[index]){
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
    }
    return nullptr;
}

Ihlutir* Allt::breytaLit(int numer, std::string nyrLitur){
    int index = this->hash(numer);

    if(this->table[index]){
        if(this->table[index]->ihlutir->getNumer() == numer){
            // ekkert sem tekkar hvort þetta se annað en LED
            // eyðir og byr til nytt, ekki besta leiðin
            // en leiðin sem ég mun nota. -> notandi látinn vita
            eydahlut(numer);
            this->listaIhlut(new LED(numer, staerd, nyrLitur));
            return this->table[index]->ihlutir;
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
    }
    return nullptr;
}


void Allt::prenta(){
    for(int i = 0; i < this->staerd; i++){
        IhlutirNode* current = this->table[i];
        while(current){
            std::cout << "Hylki " << i << ": ";
            current->ihlutir->prenta();
            current = current->next;
        }
    }
}
Allt::~Allt(){
    IhlutirNode* newHead;
    for(int i = 0; i < this->staerd; i++){
        while(this->table[i] != nullptr){
            newHead = this->table[i]->next;
            delete this->table[i];
            this->table[i] = newHead;
        }
    }
}