#include<iostream>
using namespace std;

int main(){
    int n,sum=0;
    cin>>n;
    // for(int i=1;i<=n;i++){
    //     sum+=i;
    // }
    sum=(n*(n+1))/2; // Use for loop or use this
    cout<<sum;
    return 0;
}