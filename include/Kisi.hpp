/**
* @file Kisi.hpp
* @description Kişi sınıfının header dosyası
* @course 1. A GRUBU
* @assignment 2. ÖDEV
* @date 22.08.2021
* @author İbrahim Yiğit Tın ibrahim.tin@ogr.sakarya.edu.tr
*/

#ifndef KISI_HPP
#define KISI_HPP

#include <iostream>
#include <string>
using namespace std;
class Kisi{
    private:
        string isim;
        int yas;
        int boy;
    public:
        Kisi();
        //Kişi bilgilerini atamak için constructor function
        Kisi(int b,int y,string is);
        int getBoy();
        string getIsim();
        ~Kisi();

        
};

#endif