#include<iostream>
using namespace std;
main()
{
int sizeofFertilizerBag;
int costOfBag;
int areaInSqrfeet;
int costOfFertilizerperPound;
int costOfFertilizingPerSqrFeet;
cout<<"enter size of fertilizer bag"<<endl;
cin>>sizeofFertilizerBag;
cout<<" enter cost of bag"<<endl;
cin>>costOfBag;
cout<<"enter area in sqr feet"<<endl;
cin>>areaInSqrfeet;
costOfFertilizerperPound=costOfBag/sizeofFertilizerBag;
cout<<"Cost Of Fertilizer per pound :"<<costOfFertilizerperPound<<endl;
costOfFertilizingPerSqrFeet=areaInSqrfeet*sizeofFertilizerBag;
cout<<"Cost of fertilizing per sqr feet : "<<costOfFertilizingPerSqrFeet<<endl;
}
