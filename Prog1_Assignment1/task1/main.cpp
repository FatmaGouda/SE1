#include <iostream>

using namespace std;

int main()
{



     //variables initialization
    int choose;
    float fahr,kelvin;
    float gram,pound,ton;
    float cm,kilo,foot,yard;
    //making user choose a system:
cout<<"Welcome to MY Unit Converter! Choose one of the following options:"<<endl;
cout<<"1- Temperature in Celsius. \n"<<"2- Mass in Kg. \n"<<"3- Length in Meter."<<endl;
cin>>choose;
if (choose==1)
{
    float celsius;
    cout<<"Please enter temperature in Celsius to continue:"<<endl;
    cin>>celsius;
    fahr=(celsius*9/5)+32;
    kelvin=celsius+273.15;
    cout<<celsius<<" Temperature in Celsius is: \n"<<endl;
    cout<<fahr<<"\t Fahrenheit. \n" <<kelvin<<"\t Kelvin."<<endl;

}
else if(choose==2)
{
    float kg;
    cout<<"Please enter mass in kg to continue:"<<endl;
    cin>>kg;
    gram=kg*100;
    pound=kg*2.205;
    ton=kg*0.001;
    cout<<kg<<"\t Mass in kg is: \n"<<endl;
    cout<<gram<<"\t Gram. \n"<<pound<<"\t pound. \n"<<ton<<"\t Ton."<<endl;

}
else if(choose==3)
{
    float meter;
    cout<<"Please enter length in meters to continue:"<<endl;
    cin>>meter;
    cm=meter*100;
    kilo=meter*0.001;
    foot=meter/3.281;
    yard=meter*1.094;
    cout<<meter<<"\t in meters is: \n"<<endl;
    cout<<cm<<"\t Cm. \n"<<kilo<<"\t Km. \n"<<foot<<"\t Ft. \n"<<yard<<"\t Yard.\n"<<endl;
}
//if the user entered a number other than the valid options 1,2,3:
else
    cout<<"Please enter a valid number and try again!"<<endl;
//Ending the program
cout<<"Thanks For Using My Unit Converter !"<<endl;
    return 0;
}
