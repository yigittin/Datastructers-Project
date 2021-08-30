/**
* @file StackString.cpp
* @description Dizi ile stackin fonksiyonlarını gerçekleştirdiğimiz cpp dosyası
* @course 1. A GRUBU
* @assignment 2. ÖDEV
* @date 22.08.2021
* @author İbrahim Yiğit Tın ibrahim.tin@ogr.sakarya.edu.tr
*/

 #include "StackString.hpp"
        void StackString::reserve(int newCapacity){          
           string *tmp=new string[newCapacity];            
           for(int i=0;i<length;i++){ tmp[i]=items[i];    
           }      
           delete[] items;            
           capacity=newCapacity;
           items=tmp;
        }
        StackString::StackString(){
           capacity=100;
           items=new string[capacity];          
           length=0;
           topOfStack=-1;
        }
         StackString::StackString(int cap){
           capacity=cap;
           items=new string[capacity];          
           length=0;
           topOfStack=-1;
        }

        bool StackString::isEmpty(){
            return length==0;
        }
        int StackString::topRet()
        {
            return topOfStack;
        }
       
        void StackString::push(string item){
            if(length==(capacity-1)) reserve (2*capacity);
            topOfStack++;
            items[topOfStack]=item;           
            length++;
        }
        void StackString::pop(){
            topOfStack--;
            length--;
        }
        string StackString:: top(){
            return items[topOfStack];
        }

        
       
        string StackString:: pickOne(int str){
           return items[str];
        }
        void StackString::makeEmpty(){
           topOfStack=-1;
           length=0;
        }
        StackString::~StackString(){
            delete[]items;            
           
        }