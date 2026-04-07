#include<iostream>
using namespace std;

main(){
float bill,d1,d2,f1,f2;
cout<<"Enter the bill amount: ";
cin>>bill;
d1=bill*0.05;
d2=bill*0.10;
f1=bill-d1;
f2=bill-d2;
if(bill<=5000){
    cout<<"Your discounted bill is: "<<f1;
}else{
    cout<<"Your discounted bill is: "<<f2;

}
}