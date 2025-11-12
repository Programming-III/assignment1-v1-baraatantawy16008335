#include "Animal.h"
#include "Bird.h"
#include "Mammal.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"
#include <iostream>
using namespace std;
Animal::Animal() {

}
Animal::Animal(string name, int age, bool isHungry) {
    this ->name = name;
    this ->age = age;
    this ->isHungry = isHungry;
}
Animal::~Animal() {

}
void Animal::setName(string name) {
    this ->name = name;
}
void Animal::setAge(int age) {
    this ->age = age;
}
void Animal::setIsHungry(bool isHungry) {
    this ->isHungry = isHungry;
}
string Animal::getName() {
    return this ->name;
}
int Animal::getAge() {
    return this ->age;
}
bool Animal::getIsHungry() {
    return this ->isHungry;
}
void Animal::display() {
    cout<< "Name:" << this -> name << endl;
    cout<<"Age:" << this -> age << endl;
    cout<< "Is Hungry?" << this -> isHungry << endl;
}
void Animal::feed() {
    if (this -> isHungry)
        cout<< "Feed your animal!" << endl;
        else cout<< "Don't feed your animal!" << endl;
}

Mammal::Mammal() :Animal() {
}
Mammal::Mammal(string furColor, string name, int age, bool isHungry) : Animal(name,age,isHungry) {
    this -> furColor = furColor;
}
Mammal::~Mammal()  {
}
void Mammal::setFurColor(string furColor) {
    this -> furColor = furColor;
}
string Mammal::getFurColor() {
    return this -> furColor;
}

Bird::Bird() :Animal() {

}
Bird::Bird(float wingSpan, string name, int age, bool isHungry) : Animal(name,age,isHungry) {
    this -> wingSpan = wingSpan;
}
Bird::~Bird() {

}

void Bird::setWingSpan(float wingSpan) {
    this -> wingSpan = wingSpan;
}
float Bird::getWingSpan() {
    return this -> wingSpan;
}

Reptile::Reptile() : Animal() {
}
Reptile::Reptile(bool isVenomous, string name, int age, bool isHungry) : Animal(name,age,isHungry) {
    this -> isVenomous = isVenomous;
}
Reptile::~Reptile() {
}
void Reptile::setVenomous(bool isVenomous) {
    this -> isVenomous = isVenomous;
}
bool Reptile::getVenomous() {
    return this -> isVenomous;
}

Enclosure::Enclosure() {

}
Enclosure::Enclosure(Animal *a, int capacity, int currentCount) {
    this -> a = a;
    this -> capacity = capacity;
    this -> currentCount = currentCount;
}
Enclosure::~Enclosure() {

}
void Enclosure::setAnimal(Animal *a) {
    this ->a = a;
}

void Enclosure::setCapacity(int capacity) {
    this -> capacity = capacity;
}
void Enclosure::setCurrentCount(int currentCount) {
    this -> currentCount = currentCount;
}
Animal* Enclosure::getAnimal() {
    return this ->a;
}
int Enclosure::getCapacity() {
    return this -> capacity;
}
int Enclosure::getCurrentCount() {
    return this ->currentCount;
}
void Enclosure::addAnimal(Animal *a) {
    this ->a = a;
}
void Enclosure::displayAnimals() {
    cout<< "Enclosure Animals: " << endl;
}

Visitor::Visitor() {

}
Visitor::Visitor(string visitorName, int ticketsBought) {
    this -> visitorName = visitorName;
    this -> ticketsBought = ticketsBought;
}
Visitor::~Visitor() {

}
void Visitor::setTicketsBought(int ticketsBought) {
    this -> ticketsBought = ticketsBought;
}
void Visitor::setVisitorName(string visitorName) {
    this -> visitorName = visitorName;

}

int Visitor::getTicketsBought() {
    return this -> ticketsBought;
}
string Visitor::getVisitorName() {
    return this -> visitorName;
}
void Visitor::displayInfo() {
    cout<< "Visitor Name: " << this -> visitorName << endl;
    cout<< "Tickets Bought: " << this -> ticketsBought << endl;
}

// ============== MAIN FUNCTION ==============
int main() {
     Animal Lion = Animal("Lion", 5, true);
    Animal Parrot = Animal("Parrot", 2, false);
    Animal Snake = Animal("Snake", 3, true);
    cout<< display(Lion)<< endl;
    cout<< display(Parrot)<< endl;
    cout<< display(Snake)<< endl;

Visitor V1= new Visitor( "Sarah Ali" , 3);
    cout << displayInfo(V1)<< endl;
    cout << "Visitor Info: " << endl;
    cout<< "Name :" << "Sarah Ali"<< endl;
    cout << "Tickets bougth : " << "3" << endl;
    
    return 0;
}
