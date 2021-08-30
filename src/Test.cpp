/**
* @file Test.cpp
* @description Programımızı çalıştıran ana cpp dosyası
* @course 1. A GRUBU
* @assignment 2. ÖDEV
* @date 22.08.2021
* @author İbrahim Yiğit Tın ibrahim.tin@ogr.sakarya.edu.tr
*/

#include "AVL.hpp"
#include "Stack.hpp"
#include "StackString.hpp"
#include <fstream>
#include <sstream>
#include "Kisi.hpp"
int main(){

        AVL *agac=new AVL();
        ifstream myReadFile;
        myReadFile.open("Kisiler.txt");
        string txtData; 
        
        //Dosya okunup her satır için ağaca gerekli verileri gönderiyoruz
        while(getline(myReadFile,txtData)){
        stringstream test(txtData);
        string segment;       
        int y=0;
        int b=0;
        string isim;
        string gonder;
        
        
        int scount=0;
        //# karakterini gördüğümüzde ayırıyoruz
            while(getline(test,segment,'#')){  
                if(scount==0){
                    isim=segment;
                }
                if(scount==1){
                    y=stoi(segment,nullptr,10);
                }
                if(scount==2){
                    b=stoi(segment,nullptr,10);
                }
            scount++;            

        }
        Kisi*kisi= new Kisi(b,y,isim);

        gonder=kisi->getIsim()+" "+to_string(y);

        agac->Ekle(gonder,kisi->getBoy());

        delete kisi;           
        }
        myReadFile.close(); 
        
    cout<<"Levelorder: ";
    cout<<endl;
    
    agac->levelorder();
    
    
    cout<<endl<<endl;
    
    
    delete agac;
    return 0;
}