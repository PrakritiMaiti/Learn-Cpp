#include<iostream>
using namespace std;

int main(){
    char ch;
    cin>>ch;
    if(ch>='a'&&ch<='z'){
        cout<<"LowerCase";
    }else if(ch>='A'&& ch<='Z'){
        cout<<"UpperCase";
    }else{
        cout<<"Invalid";
    }
    return 0;
}