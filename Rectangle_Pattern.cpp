#include<iostream>
using namespace std;

int main(){
    int row,col;
    cin>>row>>col;
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}