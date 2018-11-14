
#include <iostream>
#include "Anschrift.h"
#include "Person.h"
using namespace std;

void log (Person &person) {
    cout << "[" << &person << "]" << person.text(person)<<endl;
}

int main() {

    const string seperator = "----\n";

    Person daniel ("Daniel Düsentrieb");
    daniel.setzeAnschrift(Anschrift("Raketenweg", "12", 90560, "Entenhausen"));
    log(daniel);

    Person donald ("Donald Duck");
    daniel.setzeAnschrift(Anschrift("Entengasse", "3a", 90560, "Entenhausen"));
    log(daniel);

    cout << "\n Daniel und Donald werden Freunde:\n";
    daniel.befreunden(donald);
    log(daniel);
    log(donald);

    Person person;
    cout << "\nEine geheimsvolle Person befreundet sich mit allen anderen:\n";
    person.befreunden(daniel);
    person.befreunden(donald);
    log(person);

    Anschrift anschrift("Erpelhofer str.", "12", 90560, "Entenhausen");
    cout << "\nDonald zieht sich um nach "<< anschrift.text() << endl;
    donald.setzeAnschrift(anschrift);
    log(donald);

}