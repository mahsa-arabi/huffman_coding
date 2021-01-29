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
    string fileName;
public:
    bool isText();
    int findRepeatsNum(string text,char c);
    void separateChars(string str);
};


#endif //HUFFMAN_CODING_HUFFMAN_H
