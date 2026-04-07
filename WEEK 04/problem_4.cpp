#include<iostream>
using namespace std;

main()
{
int r,w,t;
float total,dis,final;
cout<<"Enter the number of red roses : ";
cin>>r;
cout<<"Enter the number of white roses : ";
cin>>w;
cout<<"Enter the number of tulips : ";
cin>>t;
total=(r*2)+(w*4.10)+(t*2.50);
dis=total*0.20;
final=total-dis;
if(total<200){
cout<<"Your total bill is: "<<total<<"$";
}else{
cout<<"original price : "<<total<<"$"<<endl;
cout<<"Price after discount : "<<final<<"$";
}
}