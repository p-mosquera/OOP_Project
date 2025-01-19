#ifndef SUBJECT_HPP
#define SUBJECT_HPP

#include <string>
#include "professor.hpp"

using namespace std;

class Subject{
    private:
        string name;
        int ects, semester;
        Professor* teacher;
    

    public:
        //constructor
        Subject(const string& n, const int e);

        //virtual destructor
        virtual ~Subject() = 0;

        //getters & setters
        string getSubject() const;

        // Método para asignar un profesor a la asignatura
        void assignProfessor(Professor* prof) {
            teacher = prof; // Asigna el profesor a la asignatura
        }


};
#endif //subject_hpp
