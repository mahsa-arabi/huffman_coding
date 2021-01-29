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
