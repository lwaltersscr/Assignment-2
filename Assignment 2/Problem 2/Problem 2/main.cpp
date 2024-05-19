//
//  Problem 2.cpp
//  Assignment 1
//

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    // MENUS
    
    cout << "*" << "Discovery Bay Golf and Country Club Restaurant" << setfill('*') << "*" << endl;
    cout << setfill('*') << setw(48) << "*" << endl;
    
    // Meal menu
    cout << "|" << left << setw(19) << setfill(' ') << "Meal" << setw(12) << right << "|" << setw(15) << left << "Price" << setw(10) << "|" << endl;
    cout << setfill('*') << setw(48) << "*" << endl;
    cout << "|" << setw(30) << setfill(' ') << "Discovery Bay Burger (B)" << right << "|" << setw(15) << left << "$16.00" << setw(10) << "|" << endl;
    cout << "|" << setw(30) << setfill(' ') << "Grilled Chicken Sandwich (G)" << right << "|" << setw(15) << left << "$16.00" << setw(10) << "|" << endl;
    cout << "|" << setw(30) << setfill(' ') << "Soup & Half Sandwich (S)" << right << "|" << setw(15) << left << "$12.50" << setw(10) << "|" << endl;
    cout << "|" << setw(30) << setfill(' ') << "French Dip (F)" << right << "|" << setw(15) << left << "$16.50" << setw(10) << "|" << endl;
    cout << "|" << setw(30) << setfill(' ') << "Reuben (R)" << right << "|" << setw(15) << left << "$16.00" << setw(10) << "|" << endl;
    cout << setfill('*') << setw(48) << "*" << endl;
    
    // Dessert Menu
    cout << "|" << left << setw(21) << setfill(' ') << "Dessert" << setw(10) << right << "|" << setw(15) << left << "Price" << right << "|" << endl;
    cout << setfill('*') << setw(48) << "*" << endl;
    cout << "|" << setw(30) << setfill(' ') << left << "Pie (P)" << right << "|" << setw(15) << left << "$5.00" << setw(10) << "|" << endl;
    cout << "|" << setw(19) << setfill(' ') << left << "Tiramisu (T)" << right << setw(12) << "|" << setw(15) << left << "$6.50" << setw(10) << "|" << endl;
    cout << "|" << setw(26) << setfill(' ') << left << "Chocolate Lava Cake (C)" << right << setw(5) << "|" << setw(15) << left <<"$5.00" << setw(10) << "|" << endl;
    cout << "|" << setw(20) << setfill(' ') << left << "Ice Cream (I)" << right << setw(11) << "|" << setw(15) << left << "$5.00" << setw(10) << "|" << endl;
    cout << "|" << setw(19) << setfill(' ') << left << "Macarons (M)" << right << setw(12) << "|" << setw(15) << left << "$7.00" << setw(10) << "|" << endl;
    cout << setfill('*') << setw(48) << "*" << "\n" << endl;

    // CHOICE INPUT

    // Meal choice
    char meal;
    cout << "Enter a Meal that you would like to order: ";
    cin >> meal;
    
    // Dessert choice
    char dessert;
    cout << "Enter a Desert that you would like to order: ";
    cin >> dessert;

    // PRICES

    // Meal price
    double m_price;
    
    if (meal == 'B' || meal == 'G' || meal == 'R')
        m_price = 16.00;
    else if (meal == 'S')
        m_price = 12.50;
    else if (meal == 'F')
        m_price = 16.50;
    else {
        cout << "Not on the menu.";
        return 1;
    }
    
    // Dessert price
    double d_price;
    
    if (dessert == 'P' || dessert == 'I' || dessert == 'C')
        d_price = 5.00;
    else if (dessert == 'T')
        d_price = 6.50;
    else if (dessert == 'M')
        d_price = 7.00;
    else {
        cout << "Not on the menu.";
        return 1;
    }

    // Total price
    double subtotal = m_price + d_price;    // Subtotal
    double sales_tax = subtotal * 0.0725;   // Sales tax
    double total = sales_tax + subtotal;    // Final price
    
    // MESSAGES
    
    // Sales tax and price
    cout << "\nSales tax: " << showpoint << fixed << setprecision(2) << sales_tax << endl;
    cout << "\nYour total is: $" << showpoint << fixed << setprecision(2) << total << " and this will go to member charge!" << endl;
    
    // Goodbye message
    cout << "\nThank you for dining with us at Discovery Bay Golf and Country Club! You made Matt Padilla happy☺" << endl;

    return 0;
}

