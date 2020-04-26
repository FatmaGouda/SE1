#include "course.h"
#include <bits/stdc++.h>
using namespace std;
course::course()
{

}
void course:: printCourseInfo()
{



    cout<<"Course Name:\t"<<courseName<<endl;
    cout<<"Course CODE:\t"<<courseCode<<endl;
    cout<<"Course Grade:\t"<<courseGrade<<endl;
    cout<<"Course points:\t"<<coursePoint<<endl;
    cout<<"Course Year:\t"<<courseYear<<endl;
    cout<<"Course Semester:\t"<<courseSemester<<endl;

}
void course:: setcoursename(string x)
{

    courseName=x;

}
void course::setcoursecode(string x)
{

    courseCode=x;

}
void course::setcoursegrade(char x)
{

    courseGrade=x;
}
void course::setcoursepoint(float x)
{

    coursePoint=x;
}
void course::setcourseyear(int x)
{
    courseYear=x;

}
void course::setcoursesem(int x)
{
    courseSemester=x;

}
string course::getcoursename()
{
    return courseName;

}
string course::getcoursecode()
{
    return courseCode;
}
char course::getcoursegrade()
{
    return courseGrade;
}
float course::getcoursepoint()
{
    return coursePoint;
}
int course::getcourseyear()
{
    return courseYear;
}
int course::getcoursesem()
{
    return courseSemester;
}
