#include "cipherfeistel.h"

void CipherFeistel::CipherAlgoritm(string str){
    str = Check32Block(str);
    std::cout<<"I'm work "<<str<<endl;
};

string CipherFeistel::Check32Block(string str){
    int i = 0;
    while((str.size()%16)!=0){
        str.push_back('_');
        i++;
        cout<<str<<endl;
    }
    return str;
};