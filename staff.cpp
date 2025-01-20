#include "staff.hpp"


// Método para describir al personal
void Staff::describePerson() {
    cout << "Name: " << getName() << ", Surname: " << getSurname()
         << ", ID: " << getID() << ", Employee ID: " << staffID
         << ", Position: " << position << endl;
}

