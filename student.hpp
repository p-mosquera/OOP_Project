#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <string>
#include "person.hpp"

using namespace std;

class Student : public Person {
private:
    string studentID;
    string major;

public:
    // Constructor
    Student(const string& n, const string& s, const string& i, const string& stdID, const string& m)
        : Person(n, s, i), studentID(stdID), major(m) {}

    // Destructor
    virtual ~Student() {} 

    // Implementación del método virtual puro
    void describePerson() override {
        cout << "Nombre: " << getName() << ", Apellido: " << getSurname() 
             << ", ID: " << getID() << ", Student ID: " << studentID 
             << ", Major: " << major << endl;
    }

    // Getters y setters
    string getStudentID() const {
        return studentID;
    }

    void setStudentID(const string& stdID) {
        studentID = stdID;
    }

    string getMajor() const {
        return major;
    }

    void setMajor(const string& m) {
        major = m;
    }
};

#endif // STUDENT_HPP
