#ifndef COURSE_H
#define COURSE_H
using namespace std;
#include <bits/stdc++.h>

class course
{
private:
    string courseName,courseCode;
    char courseGrade;
    float coursePoint;
    int courseYear,courseSemester;
public:
    course();
    void printCourseInfo();
    void setcoursename(string);
    void setcoursecode(string);
    void setcoursegrade(char);
    void setcoursepoint(float);
    void setcourseyear(int);
    void setcoursesem(int);
    string getcoursename();
    string getcoursecode();
    char getcoursegrade();
    float getcoursepoint();
    int getcourseyear();
    int getcoursesem();

};

#endif // COURSE_H
