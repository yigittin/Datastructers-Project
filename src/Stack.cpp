/**
* @file Stack.cpp
* @description Stack.hpp nin fonksiyonlarını gerçekleştirdiğimiz cpp dosyası
* @course 1. A GRUBU
* @assignment 2. ÖDEV
* @date 22.08.2021
* @author İbrahim Yiğit Tın ibrahim.tin@ogr.sakarya.edu.tr
*/

#include "Stack.hpp"
#include <iostream>

           
   void Stack :: push(int dt)
{
    struct Node *newNode=new Node;   
    newNode->data=dt;    
    newNode->next=topS;    
    topS=newNode;
}
void Stack ::pop()
{
    if(topS==NULL){        
        return;
    }
    cout<<topS->data<<" is removed."<<endl;
    topS=topS->next;
}
void Stack:: display()
{
if(topS==NULL){        
        return;
    }
    struct Node *temp=topS;
    while(temp!=NULL){        
        cout<<temp->data;
        if(temp->next!=NULL)cout<<",";
        temp=temp->next;
    }
    
}