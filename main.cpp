#include <iostream>
#include "staff.hpp"
#include "professor.hpp"
#include "student.hpp"
#include "subject.hpp"
#include "university.hpp"

using namespace std;

int main() {
    // Crear instancias de las clases
    Subject math("Matemáticas", 6);
    Professor prof("Juan", "Pérez", "123456", "EMP001", "Matemáticas", &math);
    Student stud("Ana", "Gómez", "789012", "STD001", "Ingeniería");
    Staff staff("Luis", "Martínez", "345678", "STF001", "Administrativo");

    // Describir a cada persona
    prof.describePerson();
    stud.describePerson();
    staff.describePerson();

    University myUniversity("Example");

    // Agregar miembros a la universidad
    myUniversity.addMember(&prof);
    myUniversity.addMember(&stud);
    myUniversity.addMember(&staff);

    // Describir todos los miembros de la universidad
    myUniversity.describeMembers();

    return 0;
}


