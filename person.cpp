#include "person.hpp"


// Implementación del constructor de la clase Person
Person::Person(const string& n, const string& s, const string& i) 
    : name(n), surname(s), id(i), birthday(d) {}

// Implementación de los getters
string Person::getName() const {
    return name;
}

void Person::setName(const string& n) {
    name = n;
}

string Person::getSurname() const {
    return surname;
}

void Person::setSurname(const string& s) {
    surname = s;
}

string Person::getID() const {
    return id;
}

void Person::setID(const string& i) {
    id = i;
}

string Person::getBirthday() const {
    return birthday;
}

void Person::setBirthday(const date& d) {
    birthday = d;
}
