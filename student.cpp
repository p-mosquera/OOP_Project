#include "student.hpp"


// Método para describir al estudiante
void Student::describePerson() {
    cout << "Name: " << getName() << ", Surname: " << getSurname() 
         << ", ID: " << getID() << ", Student ID: " << studentID 
         << ", Major: " << major << endl;
}
