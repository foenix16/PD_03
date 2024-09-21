#include<iostream>
using namespace std;
main(){
int num,d1,d2,d3,d4;
cout << " Enter a 4-digit number : " ;
cin >> num;
d1=num%10;
num=num/10;
d2=num%10;
num=num/10;
d3=num%10;
num=num/10;
d4=num%10;
num=num/10;

int sum = d1+d2+d3+d4;
cout << "The sum of indivisual numbers is : " << sum ;
}