#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int id;
public:
    Person(string n, int i);
    void setName( string n);
    void setId(int i);
    string getName();
    int getId();
    void display(){
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
    }
};
