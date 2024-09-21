#include <iostream>
using namespace std;

main() {
int num = 0, sum = 0;  
cout << "Enter 5 integers: ";
for (int i = 0; i < 5; i++) {
        cin >> num;  
        sum += num;  
    }
cout << "The sum of the 5 integers is: " << sum << endl;
}
