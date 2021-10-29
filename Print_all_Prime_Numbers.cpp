#include<iostream>
using namespace std;

int main(){
    int n,comma=0;
	cin>>n;
	for(int i=0;i<=n;i++){
		if(i<=1){
			continue;
		}
		bool flag=1;
		for(int j=2;j<=i/2;j++){
			if(i%j==0){
				flag=0;
				break;
			}
		}
		if (flag==1){
			if (comma==0){
			cout<<i;
			}else{
				cout<<", "<<i;
			}
			comma++;
		}
	}
	return 0;
}