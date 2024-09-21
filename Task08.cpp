#include<iostream>
using namespace std;
main(){
double vegPrice, fruitPrice, totalkgFruit, totalkgVeg, earningfromveg, earningfromfruit,total;
cout << "Enter vegetable price per kilogram : " ;
cin >> vegPrice ;
cout << " Enter fruit price per kilogram : " ;
cin >> fruitPrice ;
cout << " Enter total kg of vegetables : " ;
cin >> totalkgVeg ;
cout << " Enter total kg of fruits : " ;
cin >> totalkgFruit ;
earningfromveg = (vegPrice*totalkgVeg)*1.94;
earningfromfruit = (fruitPrice*totalkgFruit)*1.94;
total = earnignfromveg + earningfromfruit ;
cout << " The total earnings are :" << total;
}

