#ifndef TEACHER_H
#define TEACHER_H
#include<Person.h>
#include <iostream>
#include <Person.h>
using namespace std;
class Teacher:public Person
{
private:
    string subject;
    float salary;
public:
    Teacher()
    {

    }
    Teacher(string subject,float salary)
    {
        this->subject=subject;
        this->salary=salary;
    }
    void setSubject(string subject)
    {
        this->subject=subject;
    }
    void setSalary(float salary)
    {
        this->salary=salary;
    }
    string getSubject()
    {
        return subject;
    }
    float getSalary()
    {
        return salary;
    }
    void print()
    {
        Person::print();
        cout<<"The Subject Is : "<<subject<<endl;
        cout<<"The Salary Is : "<<salary<<endl;
    }
    void informations()
    {
        Person::informations();
        cout<<"Please Enter Your Subject : "<<endl;
        cin>>subject;
        cout<<"Please Enter Your Salary : "<<endl;
        cin>>salary;
    }

};

#endif // TEACHER_H
