#ifndef PERSON_HPP
#define PERSON_HPP

#include <string>
#include <iostream>

using namespace std;

class Person {
protected:
    string name, surname, id;

public:
    // Constructor
    Person(const string& n, const string& s, const string& i);
    
    // Destructor virtual puro
    virtual ~Person();
    
    // Getters y setters
    string getName() const;
    void setName(const string& n);
    
    string getSurname() const; 
    void setSurname(const string& s);

    string getID() const;
    void setID(const string& i);

    // Método virtual puro para describir a la persona
    virtual void describePerson() = 0;
};

#endif // PERSON_HPP
