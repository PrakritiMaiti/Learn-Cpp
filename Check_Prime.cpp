#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    int flag=1;
    if (num<=1){cout<<"Not Prime";
    }else
    {for(int i=2;i<=num/2;i++){
        if(num%i==0){
            cout<<"Not Prime";
            flag=0;
            break;
        }
    }
    if(flag==1){
        cout<<"Prime";
    }}
    return 0;
}