/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BinarySearchTree.cpp
 * Author: tiara
 * 
 * Created on June 22, 2019, 8:56 AM
 */

#include "BinarySearchTree.h"
#include <iostream>
using namespace std;

BinarySearchTree::BinarySearchTree() {
    root = NULL;
}

bool BinarySearchTree::Empty() {
    if (root == NULL) {
        return true;
    }
    return false;
}

bool BinarySearchTree::Insert(int dishNum) {
    cout << dishNum << endl;
    return true;
}

bool BinarySearchTree::IsThere(int dishNum) {
    return true;
}

void BinarySearchTree::Display() {
  
}

