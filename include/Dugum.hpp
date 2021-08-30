/**
* @file Dugum.hpp
* @description Düğümün header dosyası
* @course 1. A GRUBU
* @assignment 2. ÖDEV
* @date 22.08.2021
* @author İbrahim Yiğit Tın ibrahim.tin@ogr.sakarya.edu.tr
*/

#ifndef DUGUM_HPP
#define DUGUM_HPP

#include <iostream>
#include "Stack.hpp"
struct Dugum{
    int veri;
    struct Dugum *sol;
    struct Dugum *sag;       
    int stackptr;
    int yukseklik;

    //Yukseklikleri ve derinligi tutan stackleri oluşturuyoruz
    Stack *yukStc=new Stack();    
    Stack *derStc=new Stack();
     
};


#endif