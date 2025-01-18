#include "university.hpp"

// Implementación de la clase University

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
