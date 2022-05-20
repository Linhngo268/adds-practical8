


#include <string>
#include "Node.h"
#include <iostream>
using namespace std;
Node::Node(){
    this->data=0;
    this->next=nullptr;

}

 Node::Node(int data1,Node *next1){
     this->data=data1;
     this->next=next1;
 }
int  Node::getData(){
    return data;
}
Node* Node ::getNext(){
    return next;
}
Node::~Node(){}


