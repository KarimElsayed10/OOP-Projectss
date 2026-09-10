#ifndef STAFF_H
#define STAFF_H
#include <iostream>
#include <Person.h>
using namespace std;
class Staff:public Person
{
private:
    string role;
    float salary;
public:
    Staff()
    {

    }
    Staff(string role,float salary)
    {
        this->role=role;
        this->salary=salary;
    }
    void setRole(string role)
    {
        this->role=role;
    }
    void setSalary(float salary)
    {
        this->salary=salary;
    }
    string getRole()
    {
        return role;
    }
    float getSalary()
    {
        return salary;
    }
    void informations()
    {
        Person::informations();
        cout<<"Please Enter Your Role : "<<endl;
        cin>>role;
        cout<<"Please Enter Your Salary : "<<endl;
        cin>>salary;
    }
    void print()
    {
        Person::print();
        cout<<"The Role Is : "<<role<<endl;
        cout<<"The Salary Is : "<<salary<<endl;
    }
};

#endif // STAFF_H
