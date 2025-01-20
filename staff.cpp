#include "staff.hpp"


// Método para describir al personal
void Staff::describePerson() {
    cout << "Nombre: " << getName() << ", Apellido: " << getSurname()
         << ", ID: " << getID() << ", Employee ID: " << staffID
         << ", Position: " << position << endl;
}

