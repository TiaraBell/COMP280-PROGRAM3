/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Graph.cpp
 * Author: tiara
 * 
 * Created on June 22, 2019, 10:22 AM
 */

#include "Graph.h"
#include <iostream>
using namespace std;

Graph::Graph(int v) {
    int n = 0; // number of vertices
    this->n = v;
    int matrix[MAX][MAX]; //adjacency matrix
    bool visited[MAX];
}

void Graph::AddEdge(int v, int w) {
    if (v >= n) {
        cout << "Node does not exist." << endl;
    }
    if (w >= n) {
        cout << "Node does not exist." << endl;
    }
    matrix[v][w] = 1;
    matrix[w][v] = 1;

}

void Graph::DeleteEdge(int v, int w) {
    if (v > n || w > n || matrix[v][w] == 0) {
        cout << "Node does not exist.";
    }
    matrix[v][w] = 0;
    matrix[w][v] = 0;
}

void Graph::PrintMatrix() {
    int v = n;
    for (int i = 0; i < v; i++) {
        for (int j = 0; j < v; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

}

int Graph::PrintAdjacent(int v) {
    cout << v << " --> ";
    for (int i = 0; i < n; i++) {
        if (i > 0) {
            cout << ", ";
        }
        cout << matrix[i][v];
    }
    cout << endl;
    //    node* current = first;
    //        while (current != NULL) {
    //            for (int i = 0; i < n; i++) {
    //                if (i > 0) {
    //                    cout << ", ";
    //                }
    //                cout << current->data;
    //                current = current->next;
    //            }
    //        }
    //    for (int i = 0; i < v; i++) {
    //        for (int j = 0; j < v; j++) {
    //            if (i = v) {
    //                cout << i << ", ";
    //            }
    //        }
    //    }
    return 0;
}

void Graph::PrintDepthFirst() {

}

void Graph::PrintBreadthFirst() {

}

bool Graph::IsConnected() {
    return false;
}

bool Graph::IsComplete() {
    return false;
}

