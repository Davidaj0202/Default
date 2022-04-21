#include <iostream>
#include <string>
using namespace std;

template <typename T> void print(const T variable,const bool new_line=true){
    cout<<variable;
    if(new_line){
        cout<<"\n";
    }
}

int main();