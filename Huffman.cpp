//
// Created by asus on ۳۰/۰۱/۲۰۲۱.
//

#include "Huffman.h"
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
