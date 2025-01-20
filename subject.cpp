#include "subject.hpp"

// Implementación del constructor
Subject::Subject(const string& n, const int e) : name(n), ects(e), semester(0), teacher(nullptr) {}

// Implementación del constructor que permite asignar un profesor
Subject::Subject(const string& n, const int e, Professor* prof) : name(n), ects(e), semester(0), teacher(prof) {}

// Destructor
Subject::~Subject() {}

// Getters
string Subject::getSubject() const {
    return name;
}
