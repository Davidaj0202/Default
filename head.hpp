#include <iostream>
#include <string>
using namespace std;

template <typename T> void print(const T variable,const bool new_line=true){
    if(variable==true){
        cout<<"true";
    }
    else if(variable==false){
        cout<<"false";
    }
    else{
        cout<<variable;
    }
    if(new_line){
        cout<<"\n";
    }
}

int main();