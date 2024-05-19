//
//  Problem 1.cpp
//  Assignment 1
//

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Menu display using left and right manipulators with setw
    cout << left << "|" << setw(17) << "Gas Type" << right << "|" << "Price" << setw(15) << "|" << endl;
    cout << setfill('-') << setw(39) << "-" << endl;
    cout << setfill(' ') << left << "|" << setw(17) << "Regular" << right << "|" << "$5.02" << setw(15) << "|" << endl;
    cout << setfill('-') << setw(39) << "-" << endl;
    cout << setfill(' ') << left << "|" << setw(17) << "Midgrade" << right << "|" << "$5.22" << setw(15) << "|" << endl;
    cout << setfill('-') << setw(39) << "-" << endl;
    cout << setfill(' ') << left << "|" << setw(17) << "Premium" << right << "|" << "$5.42" << setw(15) << "|" << endl;
    cout << setfill('-') << setw(39) << "-" << endl;
    cout << setfill(' ') << left << "|" << setw(17) << "Diesel" << right << "|" << "$6.03" << setw(15) << "|" << endl;
    cout << setfill('-') << setw(39) << "-" << "\n" << endl;
    
    // Gas type choice
    string type;
    cout << "Choose a gas type to fill up your car: ";
    cin >> type;

    // Gas price
    double price;
    
    if (type == "Regular")
        price = 5.02;
    else if (type == "Midgrade")
        price = 5.22;
    else if (type == "Premium")
        price = 5.42;
    else if (type == "Diesel")
        price = 6.03;
    else {
        cout << "Invalid gas type";
        return 1;
    }

    // Number of gallons
    double gallons;
    cout << "\nHow many gallons: ";
    cin >> gallons;

    // Total price
    double total = price * gallons;
    cout << "\nYour total is $" << showpoint << fixed << setprecision(2) << total << endl;

    // Payment method
    string paymentMethod;
    cout << "\nHow would you like to pay for it? (Debit Card, Credit Card, Gift Card or Cash): ";
    cin >> paymentMethod;
    
    // Goodbye message
    cout << "\nGreat! You have paid the balance of $" << total << " using your " << paymentMethod << ". Thank you for filling up gas at Gas 4 Taxes, a place to get broke!" << endl;

    return 0;
}
