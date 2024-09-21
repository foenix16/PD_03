#include<iostream>
using namespace std;
main(){
float i,p;
float chance;
cout << " Enter the Imposter count : " ;
cin >> i;
cout << " Enter total players : " ;
cin >> p;
chance = 100*(i/p);
cout << "The number of chances are :" <<chance;
}