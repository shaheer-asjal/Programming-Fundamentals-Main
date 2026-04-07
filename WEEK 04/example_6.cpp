#include<iostream>
using namespace std;

main()
{
    string name;
    cout<<"Enter your name: ";
    cin>>name;
    if(name=="Ali"){
    cout<<"Welcome "<<name<<" to the university!";
    }
    if(name!="Ali"){
    cout<<"Try again "<<name<<"!";
    }
}