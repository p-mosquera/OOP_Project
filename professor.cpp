#include <iostream>
#include "professor.hpp"


// Método para describir al profesor
void Professor::describePerson() {
    cout << "Name: " << getName() << ", Surname: " << getSurname() 
         << ", ID: " << getID() << ", Employee ID: " << employeeID 
         << ", Departament: " << department << endl;
}
