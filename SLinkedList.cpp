#include "SLinkedList.h"
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

void SLinkedList::AddFront(int val)
{
    SNode* curr=new SNode(val);
    curr->next=head;
    head=curr;

}

int SLinkedList::RemoveFront()
 {
     SNode*temp=head;
     head=head->next;
     int e=temp->data;
     delete temp;
     return e;
 }

 void SLinkedList::display()
 {
     SNode*temp=head;
     while (temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
     }
 }
