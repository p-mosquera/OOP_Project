#include "subject.hpp"

// Implementación del constructor
Subject::Subject(const string& n, const int e) : name(n), ects(e), semester(0) {}

// Destructor virtual
Subject::~Subject() {}

// Getters
string Subject::getSubject() const {
    return name;
}
