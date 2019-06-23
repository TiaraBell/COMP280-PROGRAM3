/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Graph.h
 * Author: tiara
 *
 * Created on June 22, 2019, 8:52 AM
 */

#ifndef GRAPH_H
#define GRAPH_H

const int MAX = 100;

class Graph {
public:
    Graph(int v);
    /* initializes the number of vertices to v, 
     and fills matrix with zeros */

    void AddEdge(int v, int w);
    //add an edge between v and w

    void DeleteEdge(int v, int w);
    //delete the edge between v and w

    int PrintAdjacent(int v);
    //print all vertices that are adjacent to v

    void PrintMatrix();
    /* print the content of the adjacency matrix with one row per line of output. */

    //Add in other methods as needed
    
    void PrintDepthFirst();
    //Prints out vertices using depth first search
    
    void DepthFirstUtil(int v, bool visited[]);
    //Helper function for Depth First Search
    
    void PrintBreadthFirst();
    //Prints out vertices using breadth first search
    
    bool IsConnected();
    //checks for connectivity
    
    bool IsComplete();
    //checks for completeness
    
private:
    int n; // number of vertices
    int matrix[MAX][MAX]; //adjacency matrix
    bool visited[MAX];
};



#endif /* GRAPH_H */