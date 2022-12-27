#include<iostream>
using namespace std;
main()
{
int initialVelocity;
int acceleration;
int time;
int finalVelocity;
cout<<"enter initial velocity"<<endl;
cin>>initialVelocity;
cout<<"enter acceleration"<<endl;
cin>>acceleration;
cout<<"enter time"<<endl;
cin>>time;
finalVelocity=(acceleration*time)+initialVelocity;
cout<<"final velocity is"<<finalVelocity;
}
