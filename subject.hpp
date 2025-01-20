#ifndef SUBJECT_HPP
#define SUBJECT_HPP

#include <string>
#include <iostream>
#include "professor.hpp" // Asegúrate de que este archivo esté correctamente definido

using namespace std;

class Subject {
private:
    string name;
    int ects, semester;
    Professor* teacher; // Asegúrate de que la clase Professor esté definida

public:
    // Constructor
    Subject(const string& n, const int e);
    
    // Constructor que permite asignar un profesor
    Subject(const string& n, const int e, Professor* prof);

    // Destructor
    virtual ~Subject(); // Destructor virtual

    // Getters
    string getSubject() const;

    // Método para asignar un profesor a la asignatura
    void assignProfessor(Professor* prof) {
        teacher = prof; // Asigna el profesor a la asignatura
    }
};

#endif // SUBJECT_HPP
