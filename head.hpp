#include <iostream>
#include <string>
using namespace std;

string strtf(bool i);

template <typename T> void print(const T variable,const bool new_line=true){
    cout<<variable;
    if(new_line){
        cout<<"\n";
    }
}

template <typename T> void input(T &i,string j=""){
    cout<<j;
    cin>>i;
}