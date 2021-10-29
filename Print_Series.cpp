#include<iostream>
using namespace std;

int main(){
    int num1,num2,count=0,i=1;
	cin>>num1>>num2;
	while(count<num1){
		int n= (3*i)+2;
		i++;
		if((n%num2)==0){}
		else{
			cout<<n<<endl;
			count++;
		}
	}
    return 0;
}