#include<iostream>
using namespace std;

main()
{
float speed;
cout<<"PLease enter your speed : ";
cin>>speed;
if(speed<=10){
cout<<"slow";
} else if(speed>10){
cout<<"average";
} else if(speed<=50){
cout<<"average";
} else if(speed>50){
cout<<"fast";
} else if(speed<=150){
cout<<"fast";
} else if(speed>150){
cout<<"ultra fast";
} else if(speed<=1000){
cout<<"ultra fast";
} else if(speed>1000){
cout<<"extremely fast";
}
}

