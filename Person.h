#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int id;

public:
    Person(string n, int i) : name(n), id(i) {}

    void setName( string n) { name = n; }
    void setId(int i) { id = i; }

    string getName(){ return name; }
    int getId(){ return id; }

    void display(){
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
    }
};
