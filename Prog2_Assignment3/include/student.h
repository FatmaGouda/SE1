#ifndef STUDENT_H
#define STUDENT_H
#include "course.h"
#include "FCIvector.h"
using namespace std;
#include <bits/stdc++.h>

class student
{
private:
    string sName,sDepartment;
    int sID;
    FCIvector<course>courses;

public:
    student();

    void printInfo();
    void setsName(string );
    void setsDepartment(string );
    void setsID(int );
    string getsName();
    string getsDepartment();
    int getsID();


};

#endif // STUDENT_H
