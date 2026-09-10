#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <Person.h>
using namespace std;
class Student:public Person
{
private:
    string gradeLevel;
    float gpa;
public:
    Student()
    {

    }
    Student(string gradeLevel,float gpa)
    {
        this->gradeLevel=gradeLevel;
        this->gpa=gpa;
    }
    void setGradeLevel(string gradeLevel)
    {
        this->gradeLevel=gradeLevel;
    }
    void setGPA(float gpa)
    {
        this->gpa=gpa;
    }
    string getGradeLevel()
    {
        return gradeLevel;
    }
    float getGPA()
    {
        return gpa;
    }
    void print()
    {
        Person::print();
        cout<<"The Grade Level Is : "<<gradeLevel<<endl;
        cout<<"The GPA Is : "<<gpa<<endl;
    }
    void informations()
    {
        Person::informations();
        cout<<"Please Enter Your Grade Level : "<<endl;
        cin>>gradeLevel;
        cout<<"Please Enter Your GPA : "<<endl;
        cin>>gpa;
    }

};

#endif // STUDENT_H
