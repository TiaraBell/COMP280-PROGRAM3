/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: tiara
 *
 * Created on June 22, 2019, 8:49 AM
 */

#include <cstdlib>

#include "BinarySearchTree.h"
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
char selection;
    BinarySearchTree B;
    int value;
    const char SENTINEL = '3';

    cout << "Let's track your dishes!" << endl;
    cout << "Menu" << endl;
    cout << "1. Order dish" << endl; //Adds dish
    cout << "2. Display dishes ordered" << endl; //Displays dishes ordered and their frequency
    cout << "3. Quit" << endl; //Exits the program

    cout << "Enter a number 1-3 for your menu selection: ";
    cin >> selection;
    cout << selection << endl;

    while (selection != '3') {
        switch (selection) {
            case '1':
            {
                cout << "Order Menu" << endl;
                cout << "1. Fried Chicken" << endl;
                cout << "2. Pork Chops" << endl;
                cout << "3. Baked Chicken" << endl;
                cout << "4. Grilled Salmon" << endl;
                cout << "5. Roast Beef" << endl;
                cout << "6. Grilled Steak" << endl;
                cout << "7. Meat Loaf" << endl;
                cout << "Please enter the value of the dish you want to order: ";
                cin >> value;
                B.Insert(value);
                
            }
                break;
            case '2':
            {
                cout << "Here are the dishes that have been ordered: ";
                B.Display();
            }
                break;
                //If anything else is entered besides the current selections
            default: cout << "Invalid selection." << endl;
        }
        cout << endl;
        cout << "Enter a number 1-3 for your menu selection: ";
        cin >> selection;
        cout << selection << endl;
    }
    return 0;
}

