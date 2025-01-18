#ifndef PROFESSOR_HPP
#define PROFESSOR_HPP

#include <string>
#include "person.hpp"
#include "subject.hpp"

using namespace std;

class Professor : public Person {
private:
    string employeeID;
    string department;
    Subject* subject; // Asignatura que el profesor es responsable

public:
    // Constructor
    Professor(const string& n, const string& s, const string& i, const string& empID, const string& dept, Subject* subj)
        : Person(n, s, i), employeeID(empID), department(dept), subject(subj) {}

    // Destructor
    virtual ~Professor() {}

    // Implementación del método virtual puro
    void describePerson() override {
        cout << "Nombre: " << getName() << ", Apellido: " << getSurname() 
             << ", ID: " << getID() << ", Employee ID: " << employeeID 
             << ", Departamento: " << department 
             << ", Asignatura: " << (subject ? subject->getSubject() : "N/A") << endl;
    }

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

    Subject* getSubject() const {
        return subject;
    }

    void setSubject(Subject* subj) {
        subject = subj;
    }
};

#endif // PROFESSOR_HPP

