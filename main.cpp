#include <iostream>
#include "staff.hpp"
#include "professor.hpp"
#include "student.hpp"
#include "subject.hpp"
#include "university.hpp"

using namespace std;

int main() {
    // Create class instances
    Subject math("Mathematics", 6);
    Professor prof("John", "Smith", "123456", "EMP001", "Mathematics");
    Student stud("Anna", "Jones", "789012", "STD001", "Engineering");
    Staff staff("Louis", "Martin", "345678", "STF001", "Administrative");

    // Describe each person
    prof.describePerson();
    stud.describePerson();
    staff.describePerson();

    University myUniversity("Example");
    int option;

    do {
        cout << "\nMain Menu:" << endl;
        cout << "1. Add professor" << endl;
        cout << "2. Add student" << endl;
        cout << "3. Add staff" << endl;
        cout << "4. Add subject" << endl;
        cout << "5. Show university members" << endl;

        cout << "0. Exit" << endl;
        cout << "Select an option: ";
        cin >> option;

        switch (option) {
            case 1: {
                string name, lastname, dni, empId, dept;
                cout << "Name: "; cin >> name;
                cout << "Last name: "; cin >> lastname;
                cout << "ID number: "; cin >> dni;
                cout << "Employee ID: "; cin >> empId;
                cout << "Department: "; cin >> dept;
                
                Professor* prof = new Professor(name, lastname, dni, empId, dept);
                myUniversity.addMember(prof);
                break;
            }
            case 2: {
                string name, lastname, dni, studId, career;
                cout << "Name: "; cin >> name;
                cout << "Last name: "; cin >> lastname;
                cout << "ID number: "; cin >> dni;
                cout << "Student ID: "; cin >> studId;
                cout << "Major: "; cin >> career;
                
                Student* stud = new Student(name, lastname, dni, studId, career);
                myUniversity.addMember(stud);
                break;
            }
            case 3: {
                string name, lastname, dni, staffId, role;
                cout << "Name: "; cin >> name;
                cout << "Last name: "; cin >> lastname;
                cout << "ID number: "; cin >> dni;
                cout << "Staff ID: "; cin >> staffId;
                cout << "Role: "; cin >> role;
                
                Staff* staff = new Staff(name, lastname, dni, staffId, role);
                myUniversity.addMember(staff);
                break;
            }
           
            case 4: {
                string name;
                int credits;
                cout << "Subject name: "; cin >> name;
                cout << "Credits: "; cin >> credits;
                
                Subject* subject = new Subject(name, credits);
                myUniversity.addSubject(subject);
                cout << "Subject added successfully!" << endl;
                break;
            }
            
            case 5:
                myUniversity.describeMembers();
                break;

            case 0:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid option" << endl;
        }
    } while (option != 0);

    return 0;
}


