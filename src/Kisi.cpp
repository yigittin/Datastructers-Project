/**
* @file Kisi.cpp
* @description Kisi sınıfının fonksiyonlarını gerçekleştirdiğimiz cpp dosyası
* @course 1. A GRUBU
* @assignment 2. ÖDEV
* @date 22.08.2021
* @author İbrahim Yiğit Tın ibrahim.tin@ogr.sakarya.edu.tr
*/

#include "Kisi.hpp"
#include <string>

        Kisi::Kisi(){

        }
        Kisi::Kisi(int b,int y,string is){
            boy=b;
            yas=y;
            isim=is;
        }

        int Kisi::getBoy(){
            return boy;
        }
        string Kisi::getIsim(){
            return isim;
        }
        Kisi::~Kisi(){
            
        }