#include<iostream>
using namespace std;
main() {
int n;
cout<<"Enter the number of square meters you can paint :";
cin>>n;
int w;
int h;
cout<<"Enter width of the wall : " ;
cin>>w;
cout<<"Enter the height of the wall : " ;
cin >> h;
int areaofwall=w*h;
int total = n/areaofwall;
cout<<"Number of walls you can are :"<<total;
}