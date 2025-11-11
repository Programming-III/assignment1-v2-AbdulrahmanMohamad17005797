#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;

// ==================== Main Function ====================
int main(){
    Student s = ("Omar Nabil",2202,2, "Informatics");
    Instructor i= ("Lina Khaled",,"Computer Science",5);
    Course c = ("CS101", "Introduction to Programming", 3);
    Student b = ("max",3303,3, "Business");
    addstudent (b);
    displaycourseinfo (c);
    cout << "Instructor info" << endl;
    display (i);
    cout << "Student info" << endl;
    display (s)
    return 0;
}
