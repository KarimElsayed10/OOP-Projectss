#ifndef COURSE_H
#define COURSE_H
#include <iostream>
using namespace std;
class Course
{
private:
    string courseCode;
    string courseName;
    string teacherName;
public:
    Course()
    {

    }
    Course(string courseCode,string courseName,string teacherName)
    {
        this->courseCode=courseCode;
        this->courseName=courseName;
        this->teacherName=teacherName;
    }
    void setCourseCode(string courseCode)
    {
        this->courseCode=courseCode;
    }
    void setCourseName(string courseName)
    {
        this->courseName=courseName;
    }
    void setTeacherName(string teacherName)
    {
        this->teacherName=teacherName;
    }
    string getCourseCode()
    {
        return courseCode;
    }
    string getCourseName()
    {
        return courseName;
    }
    string getTeacherName()
    {
        return teacherName;
    }
    void print()
    {
        cout<<"The Course Code Is : "<<courseCode<<endl;
        cout<<"The Course Name Is : "<<courseName<<endl;
        cout<<"The Teacher Name Is : "<<teacherName<<endl;
    }
    void informations()
    {
        cout<<"Please Enter Course Code : "<<endl;
        cin>>courseCode;
        cout<<"Please Enter Course Name : "<<endl;
        cin>>courseName;
        cout<<"Please Enter Teacher Name : "<<endl;
        cin>>teacherName;
    }

};

#endif // COURSE_H
