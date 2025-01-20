#ifndef STAFF_HPP
#define STAFF_HPP

#include <string>
#include <iostream>
#include "person.hpp"

using namespace std;

class Staff : public Person {
private:
    string staffID;
    string position;

public:
    // Constructor
    Staff(const string& n, const string& s, const string& i, const string& stID, const string& pos)
        : Person(n, s, i), staffID(stID), position(pos) {}

    // Destructor
    virtual ~Staff() {}

    // Implementación del método virtual puro
    void describePerson() override;

    // Getters y setters
    string getStaffID() const {
        return staffID;
    }

    void setStaffID(const string& stID) {
        staffID = stID;
    }

    string getPosition() const {
        return position;
    }

    void setPosition(const string& pos) {
        position = pos;
    }
};

#endif // STAFF_HPP
