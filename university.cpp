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

// Método para comprobar existencia de miembros
bool University::personExists(const string& dni) {
    for (const auto& member : members) {
        if (member->getID() == dni) { // Asumiendo que getID() devuelve el DNI
            return true; // La persona ya existe
        }
    }
    return false; // La persona no existe
}

// Método para agregar un miembro
void University::addMember(Person* person) {
    if (!personExists(person->getID())) { // Verifica si la persona ya existe
        members.push_back(person); // Agrega el miembro si no existe
    } else {
        cout << "This person already exists." << endl;
    }
}

// Método para agregar una asignatura
void University::addSubject(Subject* subject) {
    subjects.push_back(subject);
}
