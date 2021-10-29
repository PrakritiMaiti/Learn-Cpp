#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int num,temp,rem,result=0,n=0;
	cin>>num;
	temp=num;
	while(temp!=0){
		temp/=10;
		++n;
	}temp=num;
	while(temp!=0){
		rem=temp%10;
		result +=pow(rem,n);
		temp/=10;
	}
	if(result==num)
	cout<<"true";
	else
	cout<<"false";
    
    return 0;
}