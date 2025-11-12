#ifndef VISITOR_H
#define VISITOR_H

#include <string>
using namespace std;

//define visitor class here
class Visitor {
private:
    string visitorName;
    int ticketsBought;
    public:
    Visitor();
    Visitor(string visitorName, int ticketsBought);
   ~Visitor();
    void setVisitorName (string visitorName);
    void setTicketsBought(int ticketsBought);
    string getVisitorName();
    int getTicketsBought();
    void displayInfo();

};






#endif
