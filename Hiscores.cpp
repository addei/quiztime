#include "Hiscores.h"

//DEFAULT CONSTRUCTOR
Hiscores::Hiscores() {

}

//COPY CONSTRUCTOR
Hiscores::Hiscores(string newName, int newPoints) {
    name = newName;
    points = newPoints;
}

//DECONSTRUCTOR
Hiscores::~Hiscores(){

}

//Accessor functions
string Hiscores::getName() const{
    return name;
}

int Hiscores::getPoints() const{
    return points;
}

//Mutator functions
void Hiscores::setName(string modName) {
    name = modName;
}

void Hiscores::setPoints(int modPoints) {
    points = modPoints;
}

//Operator overloading
ostream& operator<< (ostream &out, const Hiscores &h) {
    out << h.name << endl;
    out << h.points << endl;
    return out;
}

istream& operator>> (istream &in, Hiscores &h) {
    string nameBuff;
    string pointsBuff;
    getline(in, nameBuff);
    getline(in, pointsBuff);
    h.setName(nameBuff);
    h.setPoints(stoi(pointsBuff));
    return in;
}