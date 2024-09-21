#include<iostream>
using namespace std;
main() {
int age,n;
cout << "Enter your Age : " ;
cin >> age;
cout << "Enter the number of times you have moved your house : " ;
cin >> n;
n=n+1;
int avg= age/n;
cout << " Average number of times you have lived in one house is :" << avg;
}



