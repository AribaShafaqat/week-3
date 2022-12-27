#include<iostream>
using namespace std;
main()
{
string name;
float sub1;
float sub2;
float sub3;
float sub4;
float sub5;
float obtainedMarks;
float percentage;
cout<<"enter your name"<<endl;
cin>>name;
cout<<"enter subject 1 marks"<<endl;
cin>>sub1;
cout<<"enter subject 2 marks"<<endl;
cin>>sub2;
cout<<"enter subject 3 marks"<<endl;
cin>>sub3;
cout<<"enter subject 4 marks"<<endl;
cin>>sub4;
cout<<"enter subject 5 marks"<<endl;
cin>>sub5;
obtainedMarks=sub1+sub2+sub3+sub4+sub5;
percentage=obtainedMarks/500*100;
cout<<"percentage is"<<percentage;
}
