#include<iostream>
using namespace std;
 
int fact(int x){
    int factorial=1;
    for (int i=2;i<=x;i++){
        factorial*=i;
    }
    return factorial;
}
int main(){
    int n,r;
    cin>>n>>r;
    int result=fact(n)/(fact(n-r)*fact(r));
    cout<<result;
    return 0;
}