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

#include "Graph.h"
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    char selection;
    int v;
    int w;
    const char SENTINEL = '9';

    cout << "Let's create your graph!" << endl;
    cout << "Menu" << endl;
    cout << "1. Insert Edge" << endl; //Allows the user to insert an edge
    cout << "2. Delete Edge" << endl; //Allows the user to delete an edge
    cout << "3. Display Matrix" << endl; //Prints out the adjacency matrix
    cout << "4. Display Adjacent Vertices" << endl; //Prints out the vertices that are adjacent to the user inputed vertex
    cout << "5. Display Depth First Search" << endl; //Prints out vertices using depth first search
    cout << "6. Display Breadth First Search" << endl; //Prints out vertices using breadth first search
    cout << "7. Check for connectivity" << endl; //Prints out whether the graph is connected or not
    cout << "8. Check for completeness" << endl; //Prints out whether the graph is complete or not
    cout << "9. Quit" << endl; //Exits the program

    cout << "Enter the number of vertices this graph contain: ";
    cin >> v;
    Graph G(v);
    cout << v << endl;
    cout << "Enter a number 1-9 for your menu selection: ";
    cin >> selection;
    cout << selection << endl;

    while (selection != '9') {
        switch (selection) {
            case '1':
            {
                cout << "Please enter the two vertices for the edge you want to add: ";
                cin >> v;
                cin >> w;
                cout << v << ", " << w << endl;
                G.AddEdge(v, w);
    

            }
                break;
            case '2':
            {
                cout << "Please enter the two vertices for the edge you want to remove: ";
                cin >> v;
                cin >> w;
                cout << v << ", " << w << endl;
                G.DeleteEdge(v, w);

            }
                break;
            case '3':
            {
                G.PrintMatrix();
            }
                break;
            case '4':
            {
                cout << "Enter the vertex you want to know more about: ";
                cin >> v;
                cout << v << endl;
                G.PrintAdjacent(v);
            }
                break;
            case '5':
            {
                cout << "Here are your vertices using Depth First Search: ";
                G.PrintDepthFirst();
            }
                break;
            case '6':
            {
                cout << "Here are your vertices using Breadth First Search: ";
                G.PrintBreadthFirst();
            }
                break;
            case '7':
            {
                cout << "Is graph connected?: " << G.IsConnected();
            }
                break;
            case '8':
            {
                cout << "Is graph complete: " << G.IsComplete();
            }
                break;
                //If anything else is entered besides the current selections
            default: cout << "Invalid selection." << endl;
        }
        cout << endl;
        cout << "Enter a number 1-9 for your menu selection: ";
        cin >> selection;
        cout << selection << endl;
    }
    return 0;
}
