#include<iostream>
using namespace std;

int main(){
    int num1,digit,temp,count=0;
	cin>>num1>>digit;
		
	for(int i=0;i<num1;i++){
		temp=num1%10;		
		if(temp==digit){
				count++;
			}
			num1/=10;
	}
	cout<<count;
    return 0;
}