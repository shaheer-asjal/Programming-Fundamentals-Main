#include<iostream>
using namespace std;

main()
{
string n1,n2,n3;
int a1,a2,a3;
cout<<"Enter the name of first brother : ";
cin>>n1;
cout<<"Enter the age of first brother : ";
cin>>a1;
cout<<"Enter the name of second brother : ";
cin>>n2;
cout<<"Enter the age of second brother : ";
cin>>a2;
cout<<"Enter the name of third brother : ";
cin>>n3;
cout<<"Enter the age of third brother : ";
cin>>a3;
string youngest;
int minage;
youngest=n1;
minage=a1;
if(a2<minage){
youngest=n2;
minage=a2;
}if(a3<minage){
youngest=n3;
minage=a3;
cout<<youngest<<" is the youngest brother!";
}
}


