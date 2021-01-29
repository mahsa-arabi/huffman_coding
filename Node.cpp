//
// Created by asus on ۳۰/۰۱/۲۰۲۱.
//

#include "Node.h"
Node::Node(){

}
Node::Node(string data, int numOfRepeats) {
    this->data=data;
    this->numOfRepeats=numOfRepeats;
    left=new Node();
    left=nullptr;
    right=new Node();
    right=nullptr;
    parent=new Node();
    parent=nullptr;
    this->isLeft=false;
    this->isRight=false;
}

Node::~Node() {
    delete left;
    delete right;
    delete parent;
}
