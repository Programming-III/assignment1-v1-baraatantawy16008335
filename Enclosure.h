#ifndef ENCLOSURE_H
#define ENCLOSURE_H

#include "Animal.h"

//define enclosure class here 


class Enclosure {
private:
    Animal* a;
    int capacity;
    int currentCount;
    public:
    Enclosure();
    Enclosure(Animal* a, int capacity , int currentCount);
    ~Enclosure();
    void setAnimal(Animal* a);
    void setCapacity(int capacity);
    void setCurrentCount(int currentCount);
    Animal* getAnimal();
    int getCapacity();
    int getCurrentCount();
    void addAnimal(Animal* a);
    void displayAnimals();
};





#endif
