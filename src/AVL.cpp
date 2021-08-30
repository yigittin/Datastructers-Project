/**
* @file AVL.cpp
* @description AVL Ağacının fonksiyonlarını gerçekleştirdiğimiz cpp dosyası
* @course 1. A GRUBU
* @assignment 2. ÖDEV
* @date 22.08.2021
* @author İbrahim Yiğit Tın ibrahim.tin@ogr.sakarya.edu.tr
*/
#include "AVL.hpp"

 Dugum* AVL::insert(int x, Dugum* t)
    {
        if(t == NULL)
        {
            t = new Dugum();
            t->veri = x;
            t->yukseklik = 0;
            t->sol = t->sag = NULL;
            t->stackptr=yigit->topRet();
           
        }
        else if(x <= t->veri)
        {
            t->sol = insert(x, t->sol);   
            if(Yukseklik(t->sol) - Yukseklik(t->sag) == 2)
            {
                if(x <= t->sol->veri)
                    t = sagTekRot(t);                    
                else
                    t = sagCiftRot(t);
            }
        }
        else if(x > t->veri)
        {
            t->sag = insert(x, t->sag);
            if(Yukseklik(t->sag) - Yukseklik(t->sol) == 2)
            {
                if(x > t->sag->veri)
                    t = solTekRot(t);
                else
                    t = solCiftRot(t);
            }
        }

        t->yukseklik = max(Yukseklik(t->sol), Yukseklik(t->sag))+1;
        return t;
    }

    Dugum* AVL::sagTekRot(Dugum* &altDugum){
        Dugum* tmp = altDugum->sol;
        altDugum->sol = tmp->sag;
        tmp->sag = altDugum;
        altDugum->yukseklik = max(Yukseklik(altDugum->sol), Yukseklik(altDugum->sag))+1;        
        tmp->yukseklik = max(Yukseklik(tmp->sol), altDugum->yukseklik)+1;   
        return tmp;
        }   

    Dugum* AVL::solTekRot(Dugum* &altDugum){
            Dugum* tmp=altDugum->sag;
            altDugum->sag=tmp->sol;
            tmp->sol=altDugum;
            altDugum->yukseklik=max(Yukseklik(altDugum->sol),Yukseklik(altDugum->sag))+1;   
            tmp->yukseklik=max(Yukseklik(tmp->sag),altDugum->yukseklik);   
            return tmp;
        }
    Dugum* AVL::solCiftRot(Dugum* &altDugum){
            altDugum->sag=sagTekRot(altDugum->sag);
            return solTekRot(altDugum);
        }
    Dugum* AVL::sagCiftRot(Dugum* &altDugum){
            altDugum->sol=solTekRot(altDugum->sol);
            return sagTekRot(altDugum);
        }    
       
    void AVL::preorder(Dugum *altDugum){
           
            if(altDugum!=NULL){
                int yuk=altDugum->yukseklik;
                int derinlik=Depth(altDugum);
                altDugum->yukStc->push(yuk);
                altDugum->derStc->push(derinlik);
                preorder(altDugum->sol);                
                preorder(altDugum->sag);
                
            }
        }

  
    int AVL::Yukseklik(Dugum *altDugum){
            return (altDugum == NULL ? -1 : altDugum->yukseklik);
        }
    
   int AVL::Depth(Dugum* root)
    {
    int yuk=Yukseklik(kok);  
    int yuk2=Yukseklik(root);
    return yuk-yuk2; 
    
    }

    void AVL::SeviyeYazdir(Dugum *altDugum,int seviye){
            if(altDugum==NULL) return;
            if(seviye==0)
            {//
                cout<<yigit->pickOne(altDugum->stackptr)<<" "<<altDugum->veri<<" ";
                cout<<"Y(";
                altDugum->yukStc->display();
                cout<<"),";
                cout<<"D(";
                altDugum->derStc->display();
                cout<<") ";
            } 
            else{
                SeviyeYazdir(altDugum->sol,seviye-1);
                SeviyeYazdir(altDugum->sag,seviye-1);
            }
        }
        
    
    
    

    AVL::AVL(){
            kok=NULL;
            
        }   
        void AVL::Ekle(string str,int yeni){
            yigit->push(str);              
            kok=insert(yeni,kok);              
            preorder();
        }
       
        Dugum* AVL::getKok(){
            return kok;
        }      
        void AVL::preorder(){
            preorder(kok);
        }
       
        
        void AVL::levelorder(){
            int h=Yukseklik();
            for(int seviye=0;seviye<=h;seviye++){
                SeviyeYazdir(kok,seviye);
            }
        }
        int AVL::Yukseklik(){
            return Yukseklik(kok);
        }
       