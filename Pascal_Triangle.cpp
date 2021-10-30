#include<iostream>                  //  1
using namespace std;                //  11
                                    //  121
int fact(int n){                    //  1331
    int factorial=1;                //  14641
    for(int i=2;i<=n;i++){
        factorial*=i;
    }
    return factorial;
}
int nCr(int n,int r){
    int result=fact(n)/(fact(n-r)*fact(r));
    return result;
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<nCr(i,j);
        }
        cout<<endl;
    }
    return 0;
}