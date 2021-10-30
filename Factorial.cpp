#include<iostream>
using namespace std;

int fact(int x){
    int factorial=1;
    for(int i=2;i<=x;i++){
        factorial*=i;
    }
    return factorial;
}
int main(){
    int n;
    cin>>n;
    cout<<fact(n);    
    return 0;
}