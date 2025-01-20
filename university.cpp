#include "university.hpp"

// Implementación de la clase University

// Destructor
University::~University() {
    for (auto member : members) {
        delete member; // Liberar memoria de los miembros
    }
    for (auto subject : subjects) {
        delete subject; // Liberar memoria de las asignaturas
    }
}

// Método para describir todos los miembros
void University::describeMembers() const {
    for (const auto& member : members) {
        member->describePerson();
    }
}

// Método para agregar un miembro
void University::addMember(Person* member) {
    members.push_back(member);
}

// Método para agregar una asignatura
void University::addSubject(Subject* subject) {
    subjects.push_back(subject);
}
