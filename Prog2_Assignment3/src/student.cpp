#include "student.h"
using namespace std;
#include <bits/stdc++.h>
student::student()
{
}


void student::printInfo()
{

    cout<<"Student name is:\t"<<sName<<endl;
    cout<<"Student ID is:\t"<<sID<<endl;
    cout<<"Student Department is:\t"<<sDepartment<<endl;
}
void student::setsName(string x )
{

    sName=x;

}
void student:: setsDepartment(string x)
{

    sDepartment=x;

}
void student::setsID(int x)
{
    sID=x;

}
string student:: getsName()
{

    return sName;
}
string student:: getsDepartment()
{
    return sDepartment;

}
int student:: getsID()
{
    return sID;

}
