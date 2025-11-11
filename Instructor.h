#include <iostream>
#include <string>
using namespace std;

class Instructor: public Person {
private:
    string department;
    int experienceYears;

public:
    Instructor();
    Instructor(string n, int i, string d, int)
        : Person(n, i), department(d), experienceYears(e) {}

    void setDepartment( string& d) { department = d; }
    void setExperienceYears(int e) { experienceYears = e; }

    string getDepartment() { return department; }
    int getExperienceYears() { return experienceYears; }

    void display() const override {
        Person::display(); 
        cout << "Department: " << department << endl;
        cout << "Years of Experience: " << experienceYears << endl;
    }
};
