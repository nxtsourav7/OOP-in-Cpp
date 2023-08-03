#include<iostream>
using namespace std;

class Student{
private:
    string Name;
    string Department;
    string Section;
    int ID;
public:
    /*  Q : What is Constructor ?
    *   A : A constructor is a special method of a class 
    *       that is automatically called/invoked when an 
    *       object of that class is created. The constructor 
    *       is responsible for initializing the object's data members
    *       or performing any necessary setup tasks.
    * 
    *       The constructor has the same name as the class and 
    *       does not have a return type, not even void. It is 
    *       typically declared in the public section of the class 
    *       declaration. Constructors can be overloaded, which means 
    *       you can define multiple constructors with different parameters.
    */

    /*  Q : types of Constructor 
    *   A : THere are two types of constructor 
    *       1. Default 
    *       2. Parameterized Constructor
    */

   //Default Consturctor
    Student(){
        cout << "This is Default Consturctor\n";
        
    }
    //Parameterized Constructor
    Student(string name , string department , string section , int id) {
        Name = name;
        Department = department;
        Section = section;
        ID = id;
    }


    void print() {
        cout << "Student Name : " << Name << '\n';
        cout << "Department : " << Department << '\n';
        cout << "Section : " << Section << '\n';
        cout << "Student_ID : " << ID << '\n';
    }

    /*  Q : What is Destructor ?
    *   A : A destructor is a special method of a class 
    *       that is automatically called when an object of 
    *       that class goes out of scope, is explicitly deleted, 
    *       or when the program terminates. The destructor is responsible 
    *       for releasing any resources that the object might have acquired during its lifetime.

    *       The destructor has the same name as the class, preceded by a tilde (~),
    *       and it doesn't take any parameters.
    */
    ~Student() {
        cout << "This is Destructor \n";
    }
};

int main() {

    Student S1;
    S1.print();
    Student S2 ={"Sourav","CSE" , "2A" , 1030};
    
    S2.print();
}