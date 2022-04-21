#include <iostream>
#include <string>
using namespace std;

string strtf(bool i);

template <typename T> void print(const T variable,const bool new_line=true){
    if(variable==true||variable==false){
        cout<<strtf(variable);
    }
    else{
        cout<<variable;
    }
    if(new_line){
        cout<<"\n";
    }
}
