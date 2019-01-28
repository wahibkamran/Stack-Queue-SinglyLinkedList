#include <iostream>
#include "StackQueue.h"
#include "SLinkedList.h"
#include <stdio.h>
#include <string>

using namespace std;

void Stack::push(int val)
{
    ++n;
    S.AddFront(val);
}

int Stack::pop()
{
    --n;
    return S.RemoveFront();
}

void Stack::display()
{
    S.display();
}


void StackQueue::enqueue(int val)
{
    s1.push(val);
}

int StackQueue::dequeue()
{
    int cnt=s1.n;
    for (int i=0; i<cnt; i++){
        s2.push(s1.pop());
    }

    int p=s2.pop();

    int counter=s2.n;
    for (int i=0; i<counter; i++){
        s1.push(s2.pop());
    }
    return p;
}

void StackQueue::display()
{
    s1.display();
}

