#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using namespace std;

//define animal class here 
class Animal {
private:
    string name;
    int age;
    bool isHungry;
    public:
    Animal();
    Animal(string name , int age , bool isHungry);
    ~Animal();
    void setName(string name);
    void setAge(int age);
    void setIsHungry(bool isHungry);
    string getName();
    int getAge();
    bool getIsHungry();
    void display();
    void feed();

};



#endif
