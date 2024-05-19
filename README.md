# Assignment 2: CMPS 301 Programming Concepts - Spring 2024

## Overview
This repository contains solutions to two problems assigned in CMPS 301: Programming Concepts for the Spring 2024 semester. The assignment involves modifying source code from Assignment 1, related to a gas station and a restaurant order platform.

### Problem 1: Gas Station
In this program, we implement functionality for a virtual gas station (same as Assignment 1) *but with the new shortcuts we have learned*. Users can select the type of gas they want to purchase, input the number of gallons, choose their payment method, and calculate the total cost of filling up gas. The intended audicence is a person who needs to fill their car up with gas. 

### Problem 2: Discovery Bay Golf and Country Club Restaurant
This program simulates an order platform for a restaurant (same as Assignment 1) *but with the new shortcuts we have learned*. Users can select a meal and a dessert from the menu, calculate the subtotal, add sales tax, and display the total cost of their order. The intended audience is a customer at the restaurant who would like to eat.

## Features
- **Problem 1 (Gas Station)**:
  - Display gas station name and prices for different types of gas.
  - Prompt users to select gas type and input gallons.
  - Calculate total cost based on the selected gas type and gallons.
  - Allow users to choose payment method.
*Shortcuts used:*
  - Uses Setprecision() to keep the decimals to a correct limit.
  - Uses Showpoint() to ensure trailing zeros appear when neccesary.
  - Uses Setfill() to create the menu.
  - Uses left/right manipulators to adjust the menu text.

- **Problem 2 (Restaurant Order Platform)**:
  - Display restaurant menu for meals and desserts.
  - Prompt users to select a meal and a dessert.
  - Calculate subtotal and add sales tax.
  - Display the total cost of the order.
*Shortcuts used:*
  - Uses Setprecision() to keep the decimals to a correct limit.
  - Uses Showpoint() to ensure trailing zeros appear when neccesary.
  - Uses Setfill() to create the menu.
  - Uses left/right manipulators to adjust the menu text.

## How to Run the Apps
1. **Problem 1 (Gas Station)**:
   - Open the provided C++ project in Xcode or any C++ compiler.
   - Run the program.
   - Follow the on-screen instructions to select gas type, input gallons, and choose payment method.

2. **Problem 2 (Restaurant Order Platform)**:
   - Open the provided C++ project in Xcode or any C++ compiler.
   - Run the program.
   - Follow the on-screen instructions to select a meal, select a dessert, and view the total cost of the order.

## Output
- **Problem 1 (Gas Station)**:
- Sample Output:
    ```
    |Gas Type         |Price              |
    ---------------------------------------
    |Regular          |$5.02              |
    ---------------------------------------
    |Midgrade         |$5.22              |
    ---------------------------------------
    |Premium          |$5.42              |
    ---------------------------------------
    |Diesel           |$6.03              |
    ---------------------------------------

Choose a gas type to fill up your car: 

    Choose a gas type to fill up your car: _____

    How many gallons: __

    Your total is $xx.xx

    How would you like to pay for it? (Debit Card, Credit Card, Gift Card or Cash): ______

    Great! You have paid the balance of $xx.xx using your Debit. Thank you for filling up gas at Gas 4 Taxes, a place to get broke!
    
    ```

- **Problem 2 (Restaurant Order Platform)**:
  - Sample Output:
    ```
    *Discovery Bay Golf and Country Club Restaurant*
    ************************************************
    |Meal                          |Price          |
    ************************************************
    |Discovery Bay Burger (B)      |$16.00         |
    |Grilled Chicken Sandwich (G)  |$16.00         |
    |Soup & Half Sandwich (S)      |$12.50         |
    |French Dip (F)                |$16.50         |
    |Reuben (R)                    |$16.00         |
    ************************************************
    |Dessert                       |Price          |
    ************************************************
    |Pie (P)                       |$5.00          |
    |Tiramisu (T)                  |$6.50          |
    |Chocolate Lava Cake (C)       |$5.00          |
    |Ice Cream (I)                 |$5.00          |
    |Macarons (M)                  |$7.00          |
    ************************************************

    Enter a Meal that you would like to order: __
    Enter a Desert that you would like to order: __

    Sales tax: xx.xx

    Your total is: $xx.xx and this will go to member charge!

    Thank you for dining with us at Discovery Bay Golf and Country Club! You made Matt Padilla happy☺
    ```
