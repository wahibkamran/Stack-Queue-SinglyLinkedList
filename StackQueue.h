#ifndef STACKQUEUE_H_INCLUDED
#define STACKQUEUE_H_INCLUDED
#include "SLinkedList.h"
#include <stdio.h>
#include <string>

#include <iostream>

using namespace std;

class Stack
{
    private:
        int n;
        SLinkedList S;

        friend class StackQueue;

    public:
        Stack():S(),n(0) { }
        void push(int val);
        int pop();
        void display();
};

class StackQueue
{
    private:
        Stack s1;
        Stack s2;

    public:
        StackQueue(): s1(),s2() {}
        void enqueue(int val);
        int dequeue();
        void display();
};
#endif
