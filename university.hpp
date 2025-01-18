#ifndef UNIVERSITY_HPP
#define UNIVERSITY_HPP

#include <string>
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
    ~University() {
        for (auto member : members) {
            delete member; // Liberar memoria de los miembros
        }
        for (auto subject : subjects) {
            delete subject; // Liberar memoria de las asignaturas
        }
    }

    // Método para agregar un miembro
    void addMember(Person* member) {
        members.push_back(member);
    }

    // Método para agregar una asignatura
    void addSubject(Subject* subject) {
        subjects.push_back(subject);
    }

    // Método para describir todos los miembros
    void describeMembers() const {
        for (const auto& member : members) {
            member->describePerson();
        }
    }

    // Método para obtener el nombre de la universidad
    string getName() const {
        return name;
    }
};

#endif // UNIVERSITY_HPP
