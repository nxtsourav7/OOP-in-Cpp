#include<iostream>
using namespace std;


// Class
class Student{
public://Acess Modefier
    /*
    *   Q : What is class ?
    *   A :In object-oriented programming, 
    *      a class is a blueprint or template that 
    *      defines the attributes (data) and behaviors (methods) 
    *      that an object of that class can possess. It is a logical entity 
    *      that represents a group of objects with similar properties and behaviors.
    */

    // Attributes (data)
    string Name;
    string Department;
    string Section;
    int ID;
    // Behaviors (methods)
    void print() {
        cout << "Student Name : " << Name << '\n';
        cout << "Department : " << Department << '\n';
        cout << "Section : " << Section << '\n';
        cout << "Student_ID : " << ID << '\n';
    }
};

int main() {
    Student S1;//Object
    /*
    *   Q : What is object?
    *   A : An object is a specific instance of a class.
    *       It is a runtime entity that is created based on the 
    *       definition provided by the class. Each object has its own set 
    *       of attributes, which represent the state of the object, and methods, 
    *       which define the actions that the object can perform.
    */
   S1.Name = "Sourav Mondal";
   S1.Department = "CSE";
   S1.Section = "2A";
   S1.ID = 1030;

   S1.print();
}
