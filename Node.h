#ifndef NODE_H
#define NODE_H
#include <string>
class Node{
    public: 
int data;
Node *next;

 Node();//contractors
 ~Node();//destructor
 Node(int data1,Node *next1);//A constructor that takes an array of integers and makes a linked list, containing all the elements of the array, in the same order.
 // As the second parameter, it takes the size of the array.
 int getData();//function to get the node
 Node *getNext();//function to get the next number


};
#endif
