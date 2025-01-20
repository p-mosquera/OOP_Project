#ifndef PROFESSOR_HPP
#define PROFESSOR_HPP

#include <string>
#include <iostream>
#include "person.hpp"

using namespace std;

class Professor : public Person {
private:
    string employeeID;
    string department;


public:
    // Constructor
        Professor(const string& n, const string& s, const string& i, const string& empID, const string& dept)
        : Person(n, s, i), employeeID(empID), department(dept) {}

    // Destructor
    virtual ~Professor() {}

    // Implementación del método virtual puro
    void describePerson() override;

    // Getters y setters
    string getEmployeeID() const {
        return employeeID;
    }

    void setEmployeeID(const string& empID) {
        employeeID = empID;
    }

    string getDepartment() const {
        return department;
    }

    void setDepartment(const string& dept) {
        department = dept;
    }

};

#endif // PROFESSOR_HPP

