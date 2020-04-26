#include <bits/stdc++.h>
#include "student.h"
#include "course.h"
#include "FCIvector.h"

FCIvector<int>vint;
FCIvector<char>vchar;
FCIvector<string>vstring;
FCIvector<float>vfloat;
FCIvector<student>vstudent;
using namespace std;
int choice;
void mainmenu()
{

    cout<<"Choose type of vector you would like to create:\n1. list of integer\n2. list of character\n3. list of string\n4. list of float\n5. list of students\n6. Exit\n"<<endl;
}

void vectorint()
{
    int choice2;


    cout<<"What kind of operation would you like to perform?\n1. Add element.\n2. Remove last element.\n3. Insert element at certain position.\n4. Erase element from a certain position.\n5. Clear.\n6. Display first element.\n7. Display last element.\n8. Display element at certain position.\n9. Display vector size.\n10. Display vector capacity.\n11. Is empty?\n"<<endl;

    cin>>choice2;
    if(choice2==1)
    {
        int x;
        cout<<"Enter Element:  ";
        cin>>x;
        vint.vpush_back(x);



    }
    else if(choice2==2)
    {
        vint.vpop_back();

    }
    else if(choice2==3)
    {
        int n,m;
        cout<<"Enter position: "<<endl;
        cin>>n;
        cout<<"Enter value: "<<endl;
        cin>>m;

        vint.vinsert(vint.vbegin()+n,m);

    }
    else if(choice2==4)
    {
        cout<<"Enter position:  ";
        int p;
        cin>>p;
        vint.verase(vint.vbegin()+p);

    }
    else if(choice2==5)
    {
        vint.vclear();

    }
    else if(choice2==6)
    {
        cout<<"First element is: "<<vint.vfront()<<endl;

    }
    else if(choice2==7)
    {
        cout<<"Last element is: "<<vint.vback()<<endl;

    }
    else if (choice2==8)
    {
        cout<<"Enter position: ";
        int f;
        cin>>f;
        cout<<"Element at position "<<f<<" is: "<<vint[f]<<endl;

    }
    else if(choice2==9)
    {
        cout<<"Vector size is: "<<vint.getsize()<<endl;

    }
    else if(choice2==10)
    {

        cout<<"Vector capacity is: "<<vint.getcapacity()<<endl;

    }
    else if(choice2==11)
    {
        if(vint.vempty()==true)
        {
            cout<<"Vector is empty!\n";


        }
        else
        {
            cout<<"Vector is NOT empty\n";
        }

    }
}

void vectorchar()
{
    int choice2;


    cout<<"What kind of operation would you like to perform?\n1. Add element.\n2. Remove last element.\n3. Insert element at certain position.\n4. Erase element from a certain position.\n5. Clear.\n6. Display first element.\n7. Display last element.\n8. Display element at certain position.\n9. Display vector size.\n10. Display vector capacity.\n11. Is empty?\n"<<endl;

    cin>>choice2;
    if(choice2==1)
    {
        char x;
        cout<<"Enter Element:  ";
        cin>>x;
        vchar.vpush_back(x);


    }
    else if(choice2==2)
    {
        vchar.vpop_back();

    }
    else if(choice2==3)
    {
        int n;
        char m;
        cout<<"Enter position: "<<endl;
        cin>>n;
        cout<<"Enter value: "<<endl;
        cin>>m;

        vchar.vinsert(vchar.vbegin()+n,m);

    }
    else if(choice2==4)
    {
        cout<<"Enter position:  ";
        int p;
        cin>>p;
        vchar.verase(vchar.vbegin()+p);

    }
    else if(choice2==5)
    {
        vchar.vclear();

    }
    else if(choice2==6)
    {
        cout<<"First element is: "<<vchar.vfront()<<endl;

    }
    else if(choice2==7)
    {
        cout<<"Last element is: "<<vchar.vback()<<endl;

    }
    else if (choice2==8)
    {
        cout<<"Enter position: ";
        int f;
        cin>>f;
        cout<<"Element at position "<<f<<" is: "<<vchar[f]<<endl;

    }
    else if(choice2==9)
    {
        cout<<"Vector size is: "<<vchar.getsize();

    }
    else if(choice2==10)
    {

        cout<<"Vector capacity is: "<<vchar.getcapacity();

    }
    else if(choice2==11)
    {
        if(vchar.vempty()==1)
        {
            cout<<"Vector is empty!\n";


        }
        else
        {
            cout<<"Vector is NOT empty\n";
        }

    }
}
void vectorstring()
{
    int choice2;

    cout<<"What kind of operation would you like to perform?\n1. Add element.\n2. Remove last element.\n3. Insert element at certain position.\n4. Erase element from a certain position.\n5. Clear.\n6. Display first element.\n7. Display last element.\n8. Display element at certain position.\n9. Display vector size.\n10. Display vector capacity.\n11. Is empty?\n"<<endl;

    cin>>choice2;
    if(choice2==1)
    {
        string x;
        cout<<"Enter Element:  ";
        cin>>x;
        vstring.vpush_back(x);


    }
    else if(choice2==2)
    {
        vstring.vpop_back();

    }
    else if(choice2==3)
    {
        int n;
        string m;
        cout<<"Enter position: "<<endl;
        cin>>n;
        cout<<"Enter value: "<<endl;
        cin>>m;

        //vstring.vinsert((vstring.vbegin())+n,m);

    }
    else if(choice2==4)
    {
        cout<<"Enter position:  ";
        int p;
        cin>>p;
        //vstring.verase(vstring.vbegin()+p);

    }
    else if(choice2==5)
    {
        vstring.vclear();

    }
    else if(choice2==6)
    {
        cout<<"First element is: "<<vstring.vfront()<<endl;

    }
    else if(choice2==7)
    {
        cout<<"Last element is: "<<vstring.vback()<<endl;

    }
    else if (choice2==8)
    {
        cout<<"Enter position: ";
        int f;
        cin>>f;
        cout<<"Element at position "<<f<<" is: "<<vstring[f]<<endl;

    }
    else if(choice2==9)
    {
        cout<<"Vector size is: "<<vstring.getsize()<<endl;

    }
    else if(choice2==10)
    {

        cout<<"Vector capacity is: "<<vstring.getcapacity()<<endl;

    }
    else if(choice2==11)
    {
        if(vstring.vempty()==1)
        {
            cout<<"Vector is empty!\n";


        }
        else
        {
            cout<<"Vector is NOT empty\n";
        }

    }
}
void vectorfloat()
{
    int choice2;


    cout<<"What kind of operation would you like to perform?\n1. Add element.\n2. Remove last element.\n3. Insert element at certain position.\n4. Erase element from a certain position.\n5. Clear.\n6. Display first element.\n7. Display last element.\n8. Display element at certain position.\n9. Display vector size.\n10. Display vector capacity.\n11. Is empty?\n"<<endl;

    cin>>choice2;
    if(choice2==1)
    {
        float x;
        cout<<"Enter Element:  ";
        cin>>x;
        vfloat.vpush_back(x);


    }
    else if(choice2==2)
    {
        vfloat.vpop_back();

    }
    else if(choice2==3)
    {
        int n;
        float m;
        cout<<"Enter position: "<<endl;
        cin>>n;
        cout<<"Enter value: "<<endl;
        cin>>m;

        vfloat.vinsert(vfloat.vbegin()+n,m);

    }
    else if(choice2==4)
    {
        cout<<"Enter position:  ";
        int p;
        cin>>p;
        vfloat.verase(vfloat.vbegin()+p);

    }
    else if(choice2==5)
    {
        vfloat.vclear();

    }
    else if(choice2==6)
    {
        cout<<"First element is: "<<vfloat.vfront()<<endl;

    }
    else if(choice2==7)
    {
        cout<<"Last element is: "<<vfloat.vback()<<endl;

    }
    else if (choice2==8)
    {
        cout<<"Enter position: ";
        int f;
        cin>>f;
        cout<<"Element at position "<<f<<" is: "<<vfloat[f]<<endl;

    }
    else if(choice2==9)
    {
        cout<<"Vector size is: "<<vfloat.getsize()<<endl;

    }
    else if(choice2==10)
    {

        cout<<"Vector capacity is: "<<vfloat.getcapacity()<<endl;

    }
    else if(choice2==11)
    {
        if(vfloat.vempty()==1)
        {
            cout<<"Vector is empty!\n";


        }
        else
        {
            cout<<"Vector is NOT empty\n";
        }

    }
}
void addstudent(){
    string sname;
cout<<"Enter Student name: " ;
cin>>sname;





}
void menu3()
{
    mainmenu();
    int choice;
    cin>>choice;
    switch (choice)
    {
    case 1:
    {
        vectorint();

        menu3();
        break;
    }
    case 2:
    {
        vectorchar();

        menu3();
        break;
    }
    case 3:
    {
        vectorstring();

        menu3();
        break;
    }
    case 4:
    {
        vectorfloat();

        menu3();
        break;
    }
    case 5:
    {
        // vectorstudent();

        menu3();
        break;

    }
    case 6:
    {
        exit(0);
    }
    default:
    {
        cout<<"Invalid number!\n";

        menu3();
        break;
    }


    }





}

int main()
{



    menu3();








    return 0;
}
