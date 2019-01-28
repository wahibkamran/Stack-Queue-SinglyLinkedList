#ifndef SLINKEDLIST_H_INCLUDED
#define SLINKEDLIST_H_INCLUDED
#include <stdio.h>
#include <string>

#include <iostream>

using namespace std;

class SNode
{
    private:
        SNode* next;
        int data;

        friend class SLinkedList;

    public:
        SNode(int val) {data=val;}

};

class SLinkedList
{
    private:
        SNode* head;

        friend class Stack;

    public:
        SLinkedList() {head=NULL;}
        void AddFront(int val);
        int RemoveFront();
        void display();
};
#endif

