#include <iostream>
#include <string>
using namespace std;

class Student: public Person {
private:
    int yearLevel;
    string major;

public:
    Student(string n, int i, int y, string m);

    void setYearLevel(int y);
    void setMajor(string m);

    int getYearLevel() { return yearLevel; }
    string getMajor() { return major; }

    void display() override {
        Person::display();
        cout << "Year Level: " << yearLevel << endl;
        cout << "Major: " << major << endl;
    }
};
