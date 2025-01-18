#include "student.hpp"

// Implementación del constructor virtual puro de la clase Person
Person::~Person() {}

// Método para describir al estudiante
void Student::describePerson() {
    cout << "Nombre: " << getName() << ", Apellido: " << getSurname() 
         << ", ID: " << getID() << ", Student ID: " << studentID 
         << ", Carrera: " << major << endl;
}
