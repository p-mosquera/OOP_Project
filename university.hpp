#ifndef UNIVERSITY_HPP
#define UNIVERSITY_HPP

#include <string>
#include <iostream>
#include <vector>
#include "person.hpp"
#include "subject.hpp"

using namespace std;

class University {
private:
    string name;
    vector<Person*> members; // Almacena tanto estudiantes como personal
    vector<Subject*> subjects; // Asignaturas ofrecidas

public:
    // Constructor
    University(const string& n) : name(n) {}

    // Destructor
    ~University();

    // Declaraciones de métodos
    void addMember(Person* member);
    void addSubject(Subject* subject);
    void describeMembers() const;

    // Método para obtener el nombre de la universidad
    string getName() const {
        return name;
    }
};

#endif // UNIVERSITY_HPP
