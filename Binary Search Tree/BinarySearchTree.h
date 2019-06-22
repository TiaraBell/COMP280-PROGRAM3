/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BinarySearchTree.h
 * Author: tiara
 *
 * Created on June 22, 2019, 8:56 AM
 */

#ifndef BINARYSEARCHTREE_H
#define BINARYSEARCHTREE_H

struct dish {
    int dishNumber;
    int counter;
};

typedef dish ElementType;

struct node {
    ElementType data;
    node * leftchild;
    node * rightchild;
};

class BinarySearchTree {
public:
    BinarySearchTree();
    bool empty(); // return true if the tree is empty, otherwise return false
    bool Insert(ElementType x); //insert a value x 
    bool IsThere(ElementType x);
    //return true if x is in the tree, otherwise return false
    void Display();
    //Display the data stored from smallest to largest based on dish number

private:
    node * root; //pointer to the root node
};

#endif /* BINARYSEARCHTREE_H */

