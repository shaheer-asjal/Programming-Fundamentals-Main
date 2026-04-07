#include<iostream>
using namespace std;

main()
{
string fig;
float s,a1,l,w,a2,r,a3,b,h,a4;
cout<<"Enter the type of figure : ";
cin>>fig;
if(fig=="square"){
cout<<"Enter the length of its one side : ";
cin>>s;
a1=s*s;
cout<<"The area of the square is : "<<a1;
}if(fig=="rectangle"){
cout<<"Enter the length of rectangle : ";
cin>>l;
cout<<"Enter the width of rectangle : ";
cin>>w;
a2=l*w;
cout<<"The area of the rectangle is : "<<a2;
}if(fig=="circle"){
cout<<"Enter the radius of circle : ";
cin>>r;
a3=3.14*r*r;
cout<<"The area of the circle is : "<<a3;
}if(fig=="triangle"){
cout<<"Enter the base of triangle : ";
cin>>b;
cout<<"Enter the height of triangle : ";
cin>>h;
a4=0.5*b*h;
cout<<"The area of the triangle is : "<<a4;
}
}