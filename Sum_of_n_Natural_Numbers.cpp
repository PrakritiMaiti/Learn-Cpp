#include<iostream>
using namespace std;

int main(){
    int first_n,last_n,sum=0;
    cin>>first_n>>last_n;
    for(int i=first_n;i<=last_n;i++){
        sum+=i;
    }
    cout<<sum;
    return 0;
}