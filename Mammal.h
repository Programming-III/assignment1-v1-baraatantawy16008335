#ifndef MAMMAL_H
#define MAMMAL_H

#include "Animal.h"

//define mammal class here
class Mammal : public Animal {
private:
    string furColor;
    public:
    Mammal();
    Mammal(string furColor , string name, int age, bool isHungry);
    ~Mammal();
    void setFurColor(string furColor);
    string getFurColor();
};






#endif
