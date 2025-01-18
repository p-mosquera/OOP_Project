#include "staff.hpp"

// Implementación del constructor virtual puro de la clase Person
Person::~Person() {}

// Método para describir al personal
void Staff::describePerson() {
    cout << "Nombre: " << getName() << ", Apellido: " << getSurname() 
         << ", ID: " << getID() << ", Staff ID: " << staffID 
         << ", Occupation: " << position << endl;
}

