#include<iostream>
using namespace std;

int main(){
    int num,rev_num=0;
    cin>>num;
    while(num>0){
        int rem=num%10;
        rev_num=rev_num*10+rem;
        num/=10;
    }
    cout<<rev_num;
    return 0;
}