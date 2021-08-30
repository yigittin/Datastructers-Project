/**
* @file Stack.hpp
* @description Bağlı Liste ile Stackin header dosyası
* @course 1. A GRUBU
* @assignment 2. ÖDEV
* @date 22.08.2021
* @author İbrahim Yiğit Tın ibrahim.tin@ogr.sakarya.edu.tr
*/

#ifndef STACK_HPP
#define STACK_HPP

#include <iostream>
using namespace std;


struct Node{   
    int data;    
    Node *next;
};



class Stack{
 Node *topS;
public:
    void push(int dt);
    void pop();
    void display();
};


#endif