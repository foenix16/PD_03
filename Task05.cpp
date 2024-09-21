#include <iostream>
using namespace std;

main() {
string name;
double weightToLose;
int daysPerKg = 15; 

cout << "Enter your name: ";
cin >> name;
cout << "Hello " << name << "! Enter the amount of weight you want to lose (in kg): ";
cin >> weightToLose;
int totalDays = weightToLose * daysPerKg;
cout << name << ", you need " << totalDays << " days to lose " <<endl;
cout<< weightToLose << " kg following the doctor's recommendations." << endl;

}
