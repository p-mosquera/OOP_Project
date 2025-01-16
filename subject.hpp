#ifndef SUBJECT_HPP
#define SUBJECT_HPP

#include <string>

using namespace std;

class Subject{
    private:
        string name;
        int ects, semester;
        //Teacher* teacher;
    

    public:
        //constructor
        Subject(const string& n, const int e);

        //virtual destructor
        virtual ~Subject()=0;

        //getters & setters
        string getSubject() const;


};
#endif //subject_hpp