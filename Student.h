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
    void setMajor(const string m);

    int getYearLevel() const { return yearLevel; }
    string getMajor() const { return major; }

    void display() const override {
        Person::display();
        cout << "Year Level: " << yearLevel << endl;
        cout << "Major: " << major << endl;
    }
};
