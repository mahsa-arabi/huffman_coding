//
// Created by asus on ۳۰/۰۱/۲۰۲۱.
//

#include "Huffman.h"
#include <algorithm>
#include <list>
#include <sstream>
#include <iomanip>
#include <math.h>
#include <cstdint>
using namespace std;

Huffman::Huffman(string fileName) {
    this->fileName=fileName;
    if(isText()){
        encode();
    }else{
        decode();
    }
}

map<string, string> Huffman::creatCharsCode() {
    //create each characters code
    auto temp=leafs;
    int n=leafs.size();
    map<string,string> characters;

    for (int k = 0; k <n ; ++k) {
        string s="";
        string c=leafs.top()->data;
        auto temp=leafs.top();
        while (temp->parent!=nullptr){
            if (temp->isLeft){
                s="0"+s;
            }else{
                s="1"+s;
            }
            temp=temp->parent;
        }
        characters.insert({c,s});
        leafs.pop();
    }
    leafs=temp;
    return characters;
}

void Huffman::buildHuffmanTree() {
    //building huffman tree
    this->leafs=pq;
    while(pq.size() > 1) {
        auto p=pq.top();
        pq.pop();
        auto q=pq.top();
        pq.pop();

        string concat="";
        concat=q->data+p->data;
        //build tree
        auto root = new Node(concat, p->numOfRepeats + q->numOfRepeats);
        root->setLeft(p);
        p->setParent(root);
        p->setIsLeft(true);
        root->setRight(q);
        q->setParent(root);
        q->setIsRight(true);
        pq.push(root);
    }
    int n=pq.size();
    int n2=leafs.size();
    this->charactersCode = creatCharsCode();  //create each characters code base on the tree
    printHuffTreePostOrder(pq.top(),0);

}
void Huffman::buildHuffmanTree2() {
    //read a file and build huffman tree for decoding
    ifstream infile;
    infile.open(this->fileName);
    list<Node*> nodes;
    if (infile.good())
    {
        string sLine;  //first line of file
        getline(infile, sLine);
        string sLine2;  //second file of file
        //remove tabs in sLine
        sLine.erase(std::remove(sLine.begin(), sLine.end(), '\t'), sLine.end());
        int j=0;
        while (j < sLine.length()){ //find each char and its num of repeats
            string s="";
            s+=sLine[j];
            j++;
            string s2="";
            while (!isalpha(sLine[j])){   //find num of repeats of chars
                s2+=sLine[j];
                j++;
            }
            stringstream geek(s2);
            int temp=0;
            geek >> temp;
            auto myNode=new Node(s,temp);
            nodes.push_back(myNode);
        }
    }

    infile.close();
    for (auto const& i: nodes) {
        // std::cout << i->data <<'\t'<<i->numOfRepeats << "\n";
        this->pq.push(i);
    }
    this->leafs=pq;
    buildHuffmanTree();
    // printHuffTreePostOrder(pq.top(),0);

}

void Huffman::printHuffTreePostOrder(Node* p, int i)
{
    //print tree in the command line base on post order
    if(p != NULL) {
        if(p->getRight()) {
            printHuffTreePostOrder(p->getRight(), i + 4);
        }
        if (i) {
            std::cout << std::setw(i) << ' ';
        }
        if (p->getRight()) std::cout << " /\n" << std::setw(i) << ' ';
        std::cout<< p->data <<p->numOfRepeats << "\n ";
        if(p->getLeft()) {
            std::cout << std::setw(i) << ' ' << " \\\n";
            printHuffTreePostOrder(p->getLeft(), i + 4);
        }
    }
}

bool Huffman::isText() {
    //return true if the file name is a text(.txt) if is need to be encoded (not decoded)
    int i=0;
    while(fileName[i]!='.' && i<fileName.size()){
        i++;
    }
    if (i< fileName.size()){
        string s="";
        for (int j = i+1; j <fileName.size() ; ++j) {
            s+=fileName[j];
        }
        if(s=="cmp"){
            return false;
        }else{
            return true;
        }

    }

}
void Huffman::encode() {
    string code="";
    string text=textToString();
    separateChars(text);
    buildHuffmanTree();
    ofstream MyFile("code.cmp",ios::out|ios::binary);
    int n=leafs.size();
    string s2="";
    for (int k = 0; k <n ; ++k) {     //write information for decoding in file
        MyFile<< leafs.top()->data<<leafs.top()->numOfRepeats ;
        s2+=leafs.top()->data;
        s2+=leafs.top()->numOfRepeats;
        leafs.pop();
    }
    MyFile << '\n';
    MyFile.close();
    std::map<string, string>::iterator it;
    for (int i = 0; i < text.size(); i++) {
        string s = "";
        s += text[i];
        it = charactersCode.find(s);
        code += it->second;
    }
    compress(code);

}
void Huffman::decode() {
    buildHuffmanTree2();
    ifstream infile;
    infile.open(this->fileName,ios::in|ios::binary);
    list<Node*> nodes;
    string sLine2;
    string sLine;
    if (infile.good()) {
        getline(infile, sLine);
        getline(infile, sLine2);
    }
    infile.close();
    ofstream MyFile("decodedText.txt");
    map<string,string>::iterator it;
    map<string,string> reverseMap;

    for(it = charactersCode.begin(); it != charactersCode.end(); ++it) {
        reverseMap.insert({it->second,it->first});
    }
    sLine2=decompress(sLine2);
    string s="";
    for (int i = 0; i < sLine2.size(); i++) {
        s+=sLine2[i];
        if(reverseMap.find(s)!=reverseMap.end()){ //if the map contains s or not
            it = reverseMap.find(s);
            MyFile << it->second;
            s="";
        }
    }


    MyFile.close();
}

void Huffman::compress(string s) {
    //write the string in bytes in the file
    size_t number;
    int lastByte=0;  //num of bits in the last byte
    //find num of bytes that is needed
    if(s.length()%8!=0){
        number=(s.length())/8 +1 ;
        lastByte=(s.length())-((number-1)*8);
    }
    else  number=(s.length())/8 ;
    //converting string of 0s and 1s to bytes
    char bytes [number];
    for (int i = 0; i <number ; ++i) {
        bytes[i]=0;
    }
    for (int i = 0; i <number; ++i) {
        for(int j=0;j<8;j++){
            if(s[i*8+j]=='1'){
                int n=pow(2,7-j);
                bytes[i]=bytes[i]|n;
            }
        }
    }
    //write bytes to file
    ofstream MyFile("code.cmp",ios::app|ios::binary);
    for (int k = 0; k <number ; ++k) {
        MyFile<<bytes[k];
    }
    MyFile<<lastByte ;
    MyFile.close();

}
string Huffman::decompress(string hmCode) {
    //converting a binary string of bytes to string of 0s and 1s
    string text="";
    for(int i=0;i<hmCode.length()-1;i++){
        for (int j = 0; j <8 ; ++j) {
            int num=pow(2,7-j);
            if(hmCode[i] & num){
                text+='1';
            }else{
                text+='0';
            }
        }
    }
    int lastByte=hmCode[hmCode.length()-1] - '0'; //converting char to int
    int size=(hmCode.length()-2)*8+lastByte; //calculate size of output string
    string text2="";
    for (int k = 0; k <size ; ++k) {
        text2+=text[k];
    }
    return text2;
}




int Huffman::findRepeatsNum(string text, char c) {
    int count=0;
    for (int i = 0; i < text.size(); i++)
        if (text[i] == c) count++;
    return count;
}

void Huffman::separateChars(string str) {
    //push all chars in the string with their num of repeats in priority queue
    int index = 0;
    // Traverse through all characters
    for (int i=0; i<str.size(); i++) {
        // Check if str[i] is repeated
        int j;
        for (j=0; j<i; j++)
            if (str[i] == str[j])
                break;
        // If not present, add it to priority queue
        if (j == i){
            string s="";
            s+=str[i];
            pq.push(new Node(s,findRepeatsNum(str,str[i])));
        }

    }
}
string Huffman::textToString() {
    //read a text from file and convert it to string
    ifstream file(this->fileName);
    string text;
    if (file.is_open())
        while (file.good())
            getline(file, text);
    file.close();
    return text;
}
