#include <iostream>
#include "Huffman.h"
#include <bitset>
int main() {
    auto encode=new Huffman("text.txt");
    auto decode=new Huffman("code.cmp");
    return 0;
}
