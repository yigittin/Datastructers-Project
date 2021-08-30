/**
* @file AVL.hpp
* @description AVL Ağacının header dosyası
* @course 1. A GRUBU
* @assignment 2. ÖDEV
* @date 22.08.2021
* @author İbrahim Yiğit Tın ibrahim.tin@ogr.sakarya.edu.tr
*/
#ifndef AVL_HPP
#define AVL_HPP

#include <iostream>
#include <cmath>
#include "Stack.hpp"
#include "StackString.hpp"
#include <string>
#include "Dugum.hpp"

using namespace std;




class AVL{
    

    private:
    
        Dugum* kok;
        
        StackString*yigit=new StackString();
          
        //Veri eklememizi sağlayan fonksiyon insert fonksiyonu
        //Her eklemede dengeleme işlemi gerçekleştiriyor
        Dugum* insert(int x, Dugum* t);
      
        //Dengeleme işlemi için ağaç rotasyonları      
        Dugum* solTekRot(Dugum* &altDugum);
        Dugum* sagTekRot(Dugum* &altDugum);
        Dugum* solCiftRot(Dugum* &altDugum);
        Dugum* sagCiftRot(Dugum* &altDugum);

        //Derinlik ve Yükseklik için her eklemede ağacı dolaşıp stacklere pushluyoruz
        void preorder(Dugum *altDugum);
        
        //Her eklenen düğümde derinliği hesaplayan fonksiyon
        int Depth(Dugum *altDugum);

        
        
        //Düğümün yüksekliğini hesapladığımız fonksyion
        int Yukseklik(Dugum *altDugum);
    
       //Levelorder şekilde ağacı yazdıran fonksiyon
        void SeviyeYazdir(Dugum *altDugum,int seviye);
    
    
    
    public:
        AVL();                
        Dugum* getKok();

        //Veri eklemek ve stackstringe isim göndermek için kullandığımız fonksiyon
        void Ekle(string str,int yeni);

        void preorder();  
        
        
    
        
        //Levelorder işlemini çağırabilmemiz için public fonksiyon
        void levelorder();

        int Yukseklik();

        
        
};


#endif