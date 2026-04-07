#include<iostream>
using namespace std;

main()
{
string coun;
float price,d1,d2,f1,f2;
cout<<"Enter the name of country : ";
cin>>coun;
cout<<"Enter the ticket price : ";
cin>>price;
d1=price*0.05;
d2=price*0.10;
f1=price-d1;
f2=price-d2;    
if(coun=="Ireland"){
    cout<<"Your discounted ticket price is: "<<f2;
}else{
    cout<<"Your discounted ticket price is: "<<f1;
}
}