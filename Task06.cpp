#include<iostream>
using namespace std;
main(){
int size,cost,area;
cout << " Enter the size of fertilizer bag in pounds : " ;
cin >> size ;
cout << " Enter the cost of the bag :" ;
cin >> cost ;
cout << " Enter the area in square feet that can be covered by one bag : " ;
cin >> area ;
int CostPerPound, CostPerArea ;
CostPerPound = cost/size;
CostPerArea = cost/area;
cout << " the cost of the fertilizer per pound : " ;
cout << CostPerPound << endl;
cout << " The cost of fertilizing the area per square foot : " << CostPerArea ;
}