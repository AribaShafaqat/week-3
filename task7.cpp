#include<iostream>
using namespace std;
main()
{
string movieName;
int adultTicketPrice;
int childTicketPrice;
int adultTicketSold;
int childTicketSold;
float charityPercentage;
int totalamount;
int aftercharityamount;
cout<<"enter movie name"<<endl;
cin>>movieName;
cout<<"enter adult ticket price"<<endl;
cin>>adultTicketPrice;
cout<<"enter child ticket price"<<endl;
cin>>childTicketPrice;
cout<<"number of adult ticket sold"<<endl;
cin>>adultTicketSold;
cout<<"number of child ticket sold"<<endl;
cin>>childTicketSold;
cout<<"enter charity percentage"<<endl;
cin>>charityPercentage;
totalamount=adultTicketPrice*adultTicketSold+childTicketPrice*childTicketSold;
cout<<"Total amount after selling tickets is :"<<totalamount;
aftercharityamount=totalamount-(totalamount*charityPercentage/100);
cout<<"Total amount after charity is :"<<aftercharityamount<<endl;
}