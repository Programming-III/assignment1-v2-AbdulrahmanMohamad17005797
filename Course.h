#include <iostream>
#include <string>
using namespace std;
class Student; 
class Course {
private:
    string courseCode;
    string courseName;
    int maxStudents;
    Student* students;      
    int currentStudents;

public:
   
    Course()
        : courseCode("Undefined"), courseName("Unnamed Course"),
          maxStudents(0), students(nullptr), currentStudents(0) 
    Course(string code, string name, int max)
        : courseCode(code), courseName(name), maxStudents(max),
          currentStudents(0) {
        students = new Student[maxStudents]; 
    }

   
    ~Course() {
        delete[] students; 
    }

    void setCourseCode(string& code) { courseCode = code; }
    void setCourseName(string& name) { courseName = name; }
    void setMaxStudents(int max) {
        if (students != nullptr) delete[] students; 
        maxStudents = max;
        students = new Student[maxStudents];
        currentStudents = 0;
    }

    string getCourseCode() { return courseCode; }
    string getCourseName() { return courseName; }
    int getMaxStudents() { return maxStudents; }
    int getCurrentStudents() { return currentStudents; }

    bool addStudent(Student& s) {
        if (currentStudents >= maxStudents) {
            cout << "Cannot add student. Course is full!\n";
            return false;
        }
        students[currentStudents] = s; 
        currentStudents++;
        cout << "Student added successfully.\n";
        return true;
    }

    void displayCourseInfo() const {
        cout << "Course: " << courseCode << "" << courseName << endl;
        cout << "Max Students: " << maxStudents << endl;
        cout << "Currently Enrolled: " << currentStudents << endl;

        
        for (int i = 0; i < currentStudents; ++i) {
            cout << "Student " << (i + 1) << ":\n";
            students[i].display();
        }
    }
};
