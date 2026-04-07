#include<iostream>
using namespace std;

main()
{
float sal,per,cal,mon;
    cout<<"Enter your salary : ";
    cin>>sal;
    cout<<"Enter the percentage of advance salary you want : ";
    cin>>per;
    cal=sal*per/100;
    mon=60000.0/cal;
    cout<<"The number of months required to buy laptop is : "<<mon;
}