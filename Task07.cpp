#include<iostream>
using namespace std;
main(){

string movieName;
double adultTicketPrice, childTicketPrice;
int adultTicketsSold, childTicketsSold;
double percentageToCharity;
cout << "Enter the movie name: ";
cin >> movieName;
cout << "Enter the price of an adult ticket: ";
cin >> adultTicketPrice;
cout << "Enter the price of a child ticket: ";
cin >> childTicketPrice;
cout << "Enter the number of adult tickets sold: ";
cin >> adultTicketsSold;
cout << "Enter the number of child tickets sold: ";
cin >> childTicketsSold;
cout << "Enter the percentage of amount to be donated to the charity: ";
cin >> percentageToCharity;
double totalAmountGenerated = (adultTicketPrice * adultTicketsSold) + (childTicketPrice * childTicketsSold);   
double amountDonated = (percentageToCharity / 100) * totalAmountGenerated;double remainingAmount = totalAmountGenerated - amountDonated; 
cout << "\nMovie Name: " << movieName << endl;
cout << "Total Amount Generated: $" << totalAmountGenerated << endl;
cout << "Amount Donated to Charity: $" << amountDonated << endl;
cout << "Remaining Amount: $" << remainingAmount << endl;


}
