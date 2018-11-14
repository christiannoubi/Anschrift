#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include "Anschrift.h"

using namespace std;

class Person {

private:
    string _name;
    Anschrift _anschrift;
    vector <Person*> freunde;

public:
    Person(){

    }
    Person (string const &  name ){
        this->_name = name;
    }
    string getname () {
        return _name;
    }
    void setzeAnschrift (Anschrift anschrift) {
        this->_anschrift = anschrift;
    }
    void setzeAnschrift (string  _strasse, string  _hausnummer, int _postleitzahl, string _stadt) {
        new Anschrift(_strasse, _hausnummer, _postleitzahl, _stadt );
    }

    Anschrift anschrift () {
        return _anschrift;
    }

    void befreunden (Person &person) {
            string str = " ";
        bool isAlreadyfreind;
        for (auto f: freunde) {
            if (f == &person) {
                isAlreadyfreind = true;
                break;
            }
        }
        if (!isAlreadyfreind)
            freunde.push_back(&person);

    }
    const string  text  ( Person &   person) {
        string str = "";

        return str;
    }

};