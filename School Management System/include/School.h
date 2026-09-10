#ifndef SCHOOL_H
#define SCHOOL_H
#include<Student.h>
#include<Teacher.h>
#include<Staff.h>
#include<Course.h>
#include<Classroom.h>
#include<iostream>
using namespace std;

class School
{
private:
    string schoolName;
    string address;
    string principalName;
    Student students[1000];
    Teacher teachers[50];
    Staff staffs[50];
    Course courses[6];
    Classroom classrooms[50];
    int studentCounter=0;
    int teacherCounter=0;
    int staffCounter=0;
    int courseCounter=0;
    int classRoomCounter=0;
public:
    void addStudent()
    {
        students[studentCounter].informations();
        studentCounter++;
    }
    void addTeacher()
    {
        teachers[teacherCounter].informations();
        teacherCounter++;
    }
    void addStaff()
    {
        staffs[staffCounter].informations();
        staffCounter++;
    }
    void addCourse()
    {
        courses[courseCounter].informations();
        courseCounter++;
    }
    void addClassRoom()
    {
        classrooms[classRoomCounter].informations();
        classRoomCounter++;
    }
    void printStudents()
    {
        for(int i=0; i<studentCounter; i++)
        {
            students[i].print();
            cout<<endl;
        }
    }
    void printTeachers()
    {
        for(int i=0; i<teacherCounter; i++)
        {
            teachers[i].print();
            cout<<endl;
        }
    }
    void printStaffs()
    {
        for(int i=0; i<staffCounter; i++)
        {
            staffs[i].print();
            cout<<endl;
        }
    }
    void printCourses()
    {
        for(int i=0; i<courseCounter; i++)
        {
            courses[i].print();
            cout<<endl;
        }
    }
    void printClassRooms()
    {
        for(int i=0; i<classRoomCounter; i++)
        {
            classrooms[i].print();
            cout<<endl;
        }
    }


};

#endif // SCHOOL_H
