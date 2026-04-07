#include<iostream>
using namespace std;

main()
{
string pass,enter;
pass="Pass@1234";
cout<<"Enter the password: ";
cin>>enter;
if(enter==pass){
    cout<<"Congrats!You have cracked the code!";
}else{
    cout<<"Try again,it is not that easy!";
}
}
