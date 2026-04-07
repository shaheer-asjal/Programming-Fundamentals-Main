#include<iostream>
using namespace std;

main()
{
int hol,work,game,r1,r2;
cout<<"Enter the number of holidays : ";
cin>>hol;
work=365-hol;
game=(hol*127)+(work*63);
if(game<=30000){
r1=30000-game;
int h1=r1/60;
int m1=r1%60;
cout<<"Tom sleeps well "<<endl;
cout<<h1<<" hours and "<<m1<<" minutes left for play.";
}else{
r2=game-30000;
int h2=r2/60;
int m2=r2%60;
cout<<"Tom will run away"<<endl;
cout<<"Tom requires "<<h2<<" hours and "<<m2<<" minutes to sleep properly";
}
}
