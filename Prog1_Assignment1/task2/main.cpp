

using namespace std;
                         //Name:Fatma Alaa Gouda           //ID:20180368
int main()
{
    //variables declaration
    float sss=50,ssm=75.5,ssl=100;
    float css=45,csm=73.888,csl=97.99;
    float ms=35,mm=87.75,ml=95;
    float cls=60.96,clm=87.75,cll=113.16;
    float sfls=64.47,sflm=94.30,sfll=123.25;
    float mushroom=10,onion=5,sausage=10;
    int n,q;
    float bill,totalbill=0;
    char psize;
    string toppingchoice,continuing,toppingtype;
do{       //welcoming message and menu
cout<<"Welcome to our Pizza restaurant :) !\n"<<"Please select one of items:"<<endl;
cout<<"1) SUPER SUPREME - \n S=50 /M=75.5/ L=100 \n"<<
"2) CHICKEN SUPREME - \n S=45/ M=73.88/ L=97.99 \n"<<
"3) MARGHERITA - \n S=35/ M=70/ L=95 \n"<<
"4) CHEESE LOVERS - \n S=60.96/ M=87.75/ L=113.16 \n"<<
"5) SEAFOOD LOVERS - \n S= 64.47/ M=94.30/ L=123.25 \n"<<endl;
    //selecting items
cin>>n;
if (n==1)
    { cout<<"You select SUPER SUPREME \t"<<"good choice!"<<endl;
    cout<<"Enter quantity: \n";
    cin>>q;
    cout<<"Enter size: \n";
    cin>>psize;
    switch(psize)
{ case 's':
case 'S':
    bill=q*sss;break;
case 'm':
case 'M':
    bill=q*ssm;break;
case 'l':
case 'L':
    bill=q*ssl;break;
default:
    cout<<"please enter a valid size and try again"<<endl;
}
cout<<"Do you want extra topping?"<<endl;
cin>>toppingchoice;
   if(toppingchoice =="yes")
{
    cout<<"Please select one ( mushroom = 10, onion =5 , sausage =10)"<<endl;
        cin>>toppingtype;
        if (toppingtype=="mushroom")
        bill=bill+mushroom;
    else if (toppingtype=="onion")
        bill=bill+onion;
    else if (toppingtype=="sausage")
        bill=bill+sausage;
    }
    else
        cout<<"Thank you"<<endl;
}

else if (n==2)
{
    cout<<"You select CHICKEN SUPREME \t"<<"good choice!"<<endl;
    cout<<"Enter quantity: \n";
    cin>>q;
    cout<<"Enter size: \n";
    cin>>psize;
    switch(psize)
{ case 's':
case 'S':
    bill=q*css;break;
case 'm':
case 'M':
    bill=q*csm;break;
case 'l':
case 'L':
    bill=q*csl;break;
default:
    cout<<"please enter a valid size and try again"<<endl;
}
cout<<"Do you want extra topping?"<<endl;
cin>>toppingchoice;
   if(toppingchoice =="yes")
{
    cout<<"Please select one ( mushroom = 10, onion =5 , sausage =10)"<<endl;
        cin>>toppingtype;
        if (toppingtype=="mushroom")
        bill=bill+mushroom;
    else if (toppingtype=="onion")
        bill=bill+onion;
    else if (toppingtype=="sausage")
        bill=bill+sausage;
    }
    else
        cout<<"Thank you"<<endl;
}
else if (n==3)
{
    cout<<"You select MARGHERITA \t"<<"good choice!"<<endl;
    cout<<"Enter quantity: \n";
    cin>>q;
    cout<<"Enter size: \n";
    cin>>psize;
    switch(psize)
{ case 's':
case 'S':
    bill=q*ms;break;
case 'm':
case 'M':
    bill=q*mm;break;
case 'l':
case 'L':
    bill=q*ml;break;
default:
    cout<<"please enter a valid size and try again"<<endl;
}
cout<<"Do you want extra topping?"<<endl;
cin>>toppingchoice;
   if(toppingchoice =="yes")
{
    cout<<"Please select one ( mushroom = 10, onion =5 , sausage =10)"<<endl;
        cin>>toppingtype;
        if (toppingtype=="mushroom")
        bill=bill+mushroom;
    else if (toppingtype=="onion")
        bill=bill+onion;
    else if (toppingtype=="sausage")
        bill=bill+sausage;
    }
    else
        cout<<"Thank you"<<endl;
}

else if (n==4)
 {
     cout<<"You select CHEESE LOVERS \t"<<"good choice!"<<endl;
     cout<<"Enter quantity: \n";
    cin>>q;
    cout<<"Enter size: \n";
    cin>>psize;
    switch(psize)
{ case 's':
case 'S':
    bill=q*cls;break;
case 'm':
case 'M':
    bill=q*clm;break;
case 'l':
case 'L':
    bill=q*cll;break;
default:
    cout<<"please enter a valid size and try again"<<endl;
}
cout<<"Do you want extra topping?"<<endl;
cin>>toppingchoice;
   if(toppingchoice =="yes")
{
    cout<<"Please select one ( mushroom = 10, onion =5 , sausage =10)"<<endl;
        cin>>toppingtype;
        if (toppingtype=="mushroom")
        bill=bill+mushroom;
    else if (toppingtype=="onion")
        bill=bill+onion;
    else if (toppingtype=="sausage")
        bill=bill+sausage;
    }
    else
        cout<<"Thank you"<<endl;
 }
else if (n==5)
 {
     cout<<"You select SEAFOOD LOVERS \t"<<"good choice!"<<endl;
     cout<<"Enter quantity: \n";
    cin>>q;
    cout<<"Enter size: \n";
    cin>>psize;
    switch(psize)
{ case 's':
case 'S':
    bill=q*sfls;break;
case 'm':
case 'M':
    bill=q*sflm;break;
case 'l':
case 'L':
    bill=q*sfll;break;
default:
    cout<<"please enter a valid size and try again"<<endl;
}
cout<<"Do you want extra topping?"<<endl;
cin>>toppingchoice;
   if(toppingchoice =="yes")
{
    cout<<"Please select one ( mushroom = 10, onion =5 , sausage =10)"<<endl;
        cin>>toppingtype;
        if (toppingtype=="mushroom")
        bill=bill+mushroom;
    else if (toppingtype=="onion")
        bill=bill+onion;
    else if (toppingtype=="sausage")
        bill=bill+sausage;
    }
    else
        cout<<"Thank you"<<endl;
 }
else
    cout<<"Enter a valid number and try again!"<<endl;
cout<<"Do you want another order?"<<endl;
cin>>continuing;
totalbill=totalbill+bill;
}
while(continuing=="yes");
cout<<"\n Your total bill is:\t"<<totalbill<<"$"<<endl;
cout<<"Thanks for choosing our restaurant :) !"<<endl;
  return  0;
}
