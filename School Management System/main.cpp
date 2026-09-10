#include <iostream>
#include <Person.h>
#include <Student.h>
#include <School.h>

using namespace std;
int main()
{
    School s;
    int x;
    do
    {
        cout<<"Press 0 To Exit"<<endl;
        cout<<"Press 1 To Add Student"<<endl;
        cout<<"Press 2 To Add Teacher"<<endl;
        cout<<"Press 3 To Add Staff"<<endl;
        cout<<"Press 4 To Add Course"<<endl;
        cout<<"Press 5 To Add ClassRoom"<<endl;
        cout<<"Press 6 To Print All Students"<<endl;
        cout<<"Press 7 To Print All Teachers"<<endl;
        cout<<"Press 8 To Print All Staffs"<<endl;
        cout<<"Press 9 To Print All Courses"<<endl;
        cout<<"Press 10 To Print All ClassRooms"<<endl;
        cin>>x;
        system("cls");
        switch(x)
        {
        case 0:
            cout<<"The Program End"<<endl;
            break;
        case 1:
            s.addStudent();
            break;
        case 2:
            s.addTeacher();
            break;
        case 3:
            s.addStaff();
            break;
        case 4:
            s.addCourse();
            break;
        case 5:
            s.addClassRoom();
            break;
        case 6:
            s.printStudents();
            break;
        case 7:
            s.printTeachers();
            break;
        case 8:
            s.printStaffs();
            break;
        case 9:
            s.printCourses();
            break;
        case 10:
            s.printClassRooms();
            break;
        default:
            cout<<"Invalid Input!!Press Number From(0 - 10)"<<endl;
            break;
        }
    }
    while(x!=0);

    }
