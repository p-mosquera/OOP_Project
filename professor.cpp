#include <iostream>
#include "professor.hpp"

// Implementación del constructor virtual puro de la clase Person
Person::~Person() {}

// Método para describir al profesor
void Professor::describePerson() {
    cout << "Name: " << getName() << ", Surname: " << getSurname() 
         << ", ID: " << getID() << ", Employee ID: " << employeeID 
         << ", Departament: " << department 
         << ", Subject: " << (subject ? subject->getSubject() : "N/A") << endl;
}
