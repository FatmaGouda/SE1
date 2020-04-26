#ifndef FCIVECTOR_H
#define FCIVECTOR_H
#include <bits/stdc++.h>
using namespace std;
template<class T>
class FCIvector
{
private:
    T* elements;
    int capacity,numOfElemnts;
public:
/////////////////////////////////////////////////////////////////////////////////////////////////////////
    FCIvector()              //constructor  creates dynamically allocated array each time
    {
        elements= new T[1];
        capacity=1;
        numOfElemnts=0;

    }
////////////////////////////////////////////////////////////////////////////////////////////////////////
    void prinfcivector()    //to print vector elements
    {
        for (int i=0; i<numOfElemnts; i++)
        {
            cout<<elements[i]<<endl;
        }

    }
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    int vsize()    //function to return vector size "number of elements exists"
    {
        return numOfElemnts;

    }
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    int vcapacity()   //function to return vector capacity "number of cells exists"
    {
        return capacity;

    }
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    bool vempty()     //function to check if vector is empty or not
    {
        if(numOfElemnts==0)
        {
            return true;

        }
        else
        {
            return false;
        }

    }
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    T* vbegin()   //function returns iterator pointing on beginning of vector
    {
        return elements;

    }
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    T& vfront()     //function returns first element of vector
    {
        return elements[0];

    }
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    T& vback()      //function returns last element of vector
    {
        return elements[numOfElemnts-1];

    }
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    void vinsert(T* position,T value)   //Inserts an element and shift the rest
    {

        if(position==elements+capacity)
        {
            vpush_back(value);
        }
        numOfElemnts++;
        for(int i=numOfElemnts; i>=*position; i--)
        {

            elements[i]=elements[i-1];
        }

        *position=value;




    }
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    void vpush_back(T x)   // function to push an element at last cell of the vector
    {


        if (numOfElemnts == capacity)   //if size of vector equals the capacity we double the capacity
        {
            T* temp = new T[2 * capacity];
            for (int i = 0; i < capacity; i++)
            {
                temp[i] = elements[i];
            }


            delete[] elements;
            capacity *= 2;
            elements = temp;

            elements[numOfElemnts]=x;
            numOfElemnts++;
        }
        else
        {
            elements[numOfElemnts]=x;
            numOfElemnts++;

        }

    }
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    void vpop_back() //removes last element and decrease number of elements by one
    {
        numOfElemnts--;

    }
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    void vclear()   //delete vector and set size and capacity=0
    {
        delete[] elements;
        capacity=0;
        numOfElemnts=0;
        cout<<"\n vector is cleared successfully ! \n";
    }
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    void verase(T* x)
    {

        if(x==elements+capacity)
        {
            vpop_back();
        }
        else{T* temp=new T[numOfElemnts];
        temp=elements;
        for(int i=*x; i<=numOfElemnts; i++)
        {

            elements[i]=temp[i+1];
        }
        elements=temp;


        numOfElemnts--;}

//*position=value;


    }
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    T& operator[](int n)
    {



        return elements[n];


    }
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int getcapacity(){
return capacity;}
int getsize(){
return numOfElemnts;}

};

#endif // FCIVECTOR_H
