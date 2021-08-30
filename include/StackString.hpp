/**
* @file StackString.hpp
* @description Dizi ile Stackin header dosyası
* @course 1. A GRUBU
* @assignment 2. ÖDEV
* @date 22.08.2021
* @author İbrahim Yiğit Tın ibrahim.tin@ogr.sakarya.edu.tr
*/

#ifndef STACKSTRING_HPP
#define STACKSTRING_HPP

#include <iostream>
#include <string>
using namespace std;




class StackString{
   private:
        string *items;
      int topOfStack;
      int length;
      int capacity;
        //Stack dizisi dolarsa dizi boyutunu arttırdğımız fonksiyon
      void reserve(int newCapacity);
   
   
   public:
      StackString();  

      bool isEmpty();
      StackString(int cap);
      int topRet();  
      
      void push(string item);      
      
      void pop();      
      
      string top();   
      
      string pickOne(int str);      
      
      void makeEmpty();      
      
      ~StackString();

};


#endif