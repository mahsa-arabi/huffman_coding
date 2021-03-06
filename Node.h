//
// Created by asus on ۳۰/۰۱/۲۰۲۱.
//

#ifndef HUFFMAN_CODING_NODE_H
#define HUFFMAN_CODING_NODE_H

#include <iosfwd>
#include <string>
#include <vector>
using namespace std;
class Node {
private:
    Node* right;
    Node* left;
public:
    bool isLeft;  //true if the node is left child of his parent
    bool isRight; //true if the node is right child of his parent
    Node* parent;
    std::string data;
    int numOfRepeats;
    Node();
    Node(std::string data, int numOfRepeats);
    ~Node();
    void setLeft(Node *left);
    void setRight(Node* right);
    void setIsRight(bool isRight);
    void setIsLeft(bool isLeft);
    void setParent(Node *parent);
    Node *getRight() const;
    Node *getLeft() const;
    Node & operator=(const Node & node);
};


#endif //HUFFMAN_CODING_NODE_H
