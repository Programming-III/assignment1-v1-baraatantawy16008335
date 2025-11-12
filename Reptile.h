#ifndef REPTILE_H
#define REPTILE_H

#include "Animal.h"

//define reptile class here

class Reptile:public Animal {
private:
    bool isVenomous;
    public:
    Reptile();
    Reptile(bool isVenomous , string name , int age , bool isHungry);
    ~Reptile();
    void setVenomous(bool isVenomous);
    bool getVenomous();

};







#endif
