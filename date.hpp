#ifndef DATE_HPP
#define DATE_HPP

#include <string>

using namespace std;

class Date{
    private:
        int mm,dd,yyyy;

    public:
        //constructor
        Date(const int m, const int d, const int y);

        //virtual destructor
        virtual ~Date()=0;

        //getters & setters
        int getDay() const;
        void setDay(const int d);

        int getMonth() const;
        void setMonth(const int m);

        int getYear() const;
        void setYear(const int y);

        //method to get date as string
        string toString() const;


};

#endif //date_hpp
