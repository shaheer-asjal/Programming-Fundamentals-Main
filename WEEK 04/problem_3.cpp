#include<iostream>
using namespace std;

main()
{
float t1,t2,diff;
cout<<"Enter the temperature of first city : ";
cin>>t1;
cout<<"Enter the temperature of second city : ";
cin>>t2;
if(t1>t2){
diff=t1-t2;
}else{
diff=t2-t1;}
if(diff>=10){
cout<<"The difference is to big !";
}else{
cout<<"Program Ends!";
}
}