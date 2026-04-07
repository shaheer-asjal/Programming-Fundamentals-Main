#include<iostream>
using namespace std;

main()
{
float n1,n2;
char op;
cout<<"Enter the first number: ";
cin>>n1;
cout<<"Enter the operator: ";
cin>>op;
cout<<"Enter the second number: ";
cin>>n2;
if(op=='+'){
cout<<n1<<"-"<<n2<<"="<<n1-n2;
}if(op=='-'){
cout<<n1<<"+"<<n2<<"="<<n1+n2;
}if(op=='*'){
cout<<n1<<"/"<<n2<<"="<<n1/n2;
}if(op=='/'){
cout<<n1<<"*"<<n2<<"="<<n1*n2;
}
}
