//
// Created by asus on ۳۰/۰۱/۲۰۲۱.
//

#ifndef HUFFMAN_CODING_HUFFMAN_H
#define HUFFMAN_CODING_HUFFMAN_H

#include <string>
#include <fstream>
#include <iostream>
#include <map>
#include <queue>
#include <cstddef>
#include <bitset>
#include "Node.h"
using namespace std;
class Huffman {
private:
    class compare
    {//a object function to set comparing rule of priority queue
    public:
        bool operator()(const Node* c1, const Node* c2) const
        {
            return c1->numOfRepeats > c2->numOfRepeats;
        }
    };
    priority_queue<Node*, vector<Node*>, compare> pq;
    priority_queue<Node*, vector<Node*>, compare> leafs;
    map<string,string> charactersCode;
    string fileName;
public:
    bool isText();
    int findRepeatsNum(string text,char c);
    void separateChars(string str);
    string textToString();
    map<string,string> creatCharsCode();
    void printHuffTreePostOrder(Node* p, int i);
    void buildHuffmanTree();
    void compress(string s);
    void encode();
    void buildHuffmanTree2();
    string decompress(string hmCode);
};


#endif //HUFFMAN_CODING_HUFFMAN_H
