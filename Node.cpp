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
void Node::setLeft(Node *left) {
    this->left=left;
}

void Node::setRight(Node *right) {
    this->right=right;
}

void Node::setParent(Node *parent) {
    this->parent=parent;
}
void Node::setIsRight(bool isRight) {
    this->isRight = isRight;
}

void Node::setIsLeft(bool isLeft) {
    this->isLeft = isLeft;
}

Node *Node::getRight() const {
    return right;
}

Node *Node::getLeft() const {
    return left;
}

Node &Node::operator=(const Node &node) {
    this->numOfRepeats=node.numOfRepeats;
    this->data=node.data;
    this->parent=node.parent;
    this->right=node.right;
    this->left=node.left;
    this->isLeft=node.isLeft;
    this->isRight=node.isRight;
}




