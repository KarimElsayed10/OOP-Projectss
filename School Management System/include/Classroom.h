#ifndef CLASSROOM_H
#define CLASSROOM_H
#include <iostream>
using namespace std;
class Classroom
{
private:
    int roomNumber;
    int capacity;
public:
    Classroom()
    {

    }
    Classroom(int roomNumber,int capacity)
    {
     this->roomNumber=roomNumber;
     this->capacity=capacity;
    }
    void setRoomNumber(int roomNumber)
    {
        this->roomNumber=roomNumber;
    }
    void setCapacity(int capacity)
    {
        this->capacity=capacity;
    }
    int getRoomNumber()
    {
        return roomNumber;
    }
    int getCapacity()
    {
        return capacity;
    }
    void informations()
    {
        cout<<"Please Enter Room Number : "<<endl;
        cin>>roomNumber;
        cout<<"Please Enter Capacity : "<<endl;
        cin>>capacity;
    }
    void print()
    {
        cout<<"The Room Number Is : "<<roomNumber<<endl;
        cout<<"The Capacity Is : "<<capacity<<endl;
    }
};

#endif // CLASSROOM_H
