#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Anschrift {

private:

    string _strasse;
    string _hausnummer;
    int _postleitzahl;
    string _stadt;

public:
    Anschrift( string _strasse,  string _hausnummer, int _postleitzahl,  string _stadt) : _strasse(
            _strasse), _hausnummer(_hausnummer), _postleitzahl(_postleitzahl), _stadt(_stadt) {

    }
    Anschrift(){

    }

    string get_strasse()  {
        return _strasse;
    }

    void set_strasse(  string _strasse) {
        Anschrift::_strasse = _strasse;
    }

    string get_hausnummer()  {
        return _hausnummer;
    }

    void set_hausnummer( string _hausnummer) {
        Anschrift::_hausnummer = _hausnummer;
    }

    int get_postleitzahl()  {
        return _postleitzahl;
    }

    void set_postleitzahl(int _postleitzahl) {
        Anschrift::_postleitzahl = _postleitzahl;
    }

    string get_stadt() {
        return _stadt;
    }

    void set_stadt(  string _stadt) {
        Anschrift::_stadt = _stadt;
    }
    string text () {
        string str = " ";
        return str;
    }
};