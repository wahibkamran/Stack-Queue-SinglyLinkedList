#include <iostream>
#include "StackQueue.h"
#include "SLinkedList.h"

using namespace std;

int main()
{
    StackQueue sq1;
    cout<<"----------------------------"<<endl;
    cout<<"Adding to the queue:"<<endl;
    sq1.enqueue(5);
    sq1.enqueue(6);
    sq1.enqueue(7);
    sq1.display();
    cout<<"----------------------------"<<endl;
    cout<<"Dequeuing:"<<endl;
    sq1.dequeue();
    sq1.display();
    cout<<"----------------------------"<<endl;
    cout<<"Enqueuing another element:"<<endl;
    sq1.enqueue(10);
    sq1.display();
    cout<<"----------------------------"<<endl;
    cout<<"Dequeuing again:"<<endl;
    sq1.dequeue();
    sq1.display();
    cout<<"----------------------------"<<endl;
    return 0;
}
